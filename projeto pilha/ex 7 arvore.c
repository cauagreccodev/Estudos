#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int exclui_par(NoArvore *raiz){
    int e_par;

    if(raiz == NULL){
        return 0;
    }

    raiz->esq = exclui_par(raiz->esq);
    raiz->dir = exclui_par(raiz->dir);

    if (raiz->info %2 == 0){
        raiz = remover(raiz,raiz->info);
    }
    return raiz;
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

    percurso_em_ordem(arvore);
    printf("\n");

    exclui_par(arvore);

    percurso_em_ordem(arvore);
    printf("\n");
    return 0;
}
