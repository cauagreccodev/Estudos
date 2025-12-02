#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


int contar_folhas(NoArvore *raiz){

    if(raiz==NULL){
        return 0;
    }
    if(raiz->esq == NULL && raiz->dir == NULL)
        return 1;
    else
        return contar_folhas(raiz->esq) + contar_folhas(raiz->dir);
}

int cont_nos_nao_folha(NoArvore *raiz){

    int c_f = contar_folhas(raiz);

    if (raiz == NULL){
        return 0;
    }

    else{
        return c_f - 1 + cont_nos_nao_folha(raiz->dir) + cont_nos_nao_folha(raiz->esq);
    }

}

int main(){

    NoArvore *arvore = criar_arvore(7);

    inserir_abb(arvore,4);
    inserir_abb(arvore,10);
    inserir_abb(arvore,8);
    inserir_abb(arvore,5);
    inserir_abb(arvore,6);
    inserir_abb(arvore,2);
    inserir_abb(arvore,1);
    inserir_abb(arvore,11);

    percurso_pre_ordem(arvore);
    printf("\n");
    percurso_em_ordem(arvore);
    printf("\n");
    percurso_pos_ordem(arvore);
    printf("\n");

    printf("%d folhas",contar_folhas(arvore));
    printf("\n");
    printf("%d nos nao folha",cont_nos_nao_folha(arvore));
}

