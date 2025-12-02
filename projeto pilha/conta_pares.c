#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int contar_pares(NoArvore *raiz){

    int e_par;

    if(raiz==NULL){
        return 0;
    }
    if(e_par %2 == 0)
        e_par = 1;
    else
        e_par = 0;

    int pares_esquerda = contar_pares(raiz->esq);
    int pares_direita = contar_pares(raiz->dir);

    return e_par + pares_esquerda + pares_direita;
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

    printf("%d pares",contar_pares(arvore));
}
