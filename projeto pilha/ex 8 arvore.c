#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void percurso_pre_ordem(NoArvore *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->info);
        percurso_pre_ordem(raiz->esq);
        percurso_pre_ordem(raiz->dir);
    }
}

void percurso_em_ordem(NoArvore *raiz) {
    if (raiz != NULL) {
        percurso_em_ordem(raiz->esq);
        printf("%d ", raiz->info);
        percurso_em_ordem(raiz->dir);
    }
}

void percurso_pos_ordem(NoArvore *raiz) {
    if (raiz != NULL) {
        percurso_pos_ordem(raiz->esq);
        percurso_pos_ordem(raiz->dir);
        printf("%d ", raiz->info);
    }
}
