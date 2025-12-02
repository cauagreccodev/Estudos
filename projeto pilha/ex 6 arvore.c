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

    printf("%d folhas",contar_folhas(arvore));
}
