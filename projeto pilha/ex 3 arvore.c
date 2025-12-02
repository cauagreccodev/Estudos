#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

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
    printf("\n");

    inserir_abb(arvore,3);

    percurso_pre_ordem(arvore);
    printf("\n");
    percurso_em_ordem(arvore);
    printf("\n");
    percurso_pos_ordem(arvore);
    printf("\n");
    printf("\n");

    remover(arvore,7);

    percurso_pre_ordem(arvore);
    printf("\n");
    percurso_em_ordem(arvore);
    printf("\n");
    percurso_pos_ordem(arvore);
    printf("\n");
}
