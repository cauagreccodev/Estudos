#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int busca(NoArvore *raiz,int val){

    if(raiz == NULL){
        return 0;
    }
    if(val == raiz->info){
        return 1;
    }
    else if(val < raiz->info){
        busca(raiz->esq,val);
    }
    if (val > raiz->info){
        busca(raiz->dir,val);
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

    percurso_em_ordem(arvore);
    printf("\n");

    if(busca(arvore,200)){
        printf("VALOR ENCONTRADO");
    }
    else{
        printf("VALOR NAO ENCONTRADO");
    }
    return 0;
}
