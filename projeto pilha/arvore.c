#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

NoArvore *criar_arvore(char c) {
    NoArvore *novo_no = (NoArvore*) malloc(sizeof(NoArvore));
    if (novo_no == NULL) {
        return NULL;
    }
    novo_no->info = c;
    novo_no->esq = NULL;
    novo_no->dir = NULL;
    return novo_no;
}

int arvore_vazia(NoArvore *raiz) {
    if (raiz == NULL) {
        return 1;
    } else {
        return 0;
    }
}

NoArvore *inserir_abb(NoArvore *raiz, int V) {
    if (raiz == NULL) {
        return criar_arvore(V);
    }
    if (V < raiz->info) {
        raiz->esq = inserir_abb(raiz->esq, V);
    } else if (V > raiz->info) {
        raiz->dir = inserir_abb(raiz->dir, V);
    } else {
        printf("Chave ja existe\n");
        exit(1);
    }
    return raiz;
}

NoArvore *minimo(NoArvore *raiz) {
    if (raiz == NULL) {
        return NULL;
    }
    if (raiz->esq == NULL) {
        return raiz;
    }
    return minimo(raiz->esq);
}

NoArvore *maximo(NoArvore *raiz) {
    if (raiz == NULL) {
        return NULL;
    }
    if (raiz->dir == NULL) {
        return raiz;
    }
    return maximo(raiz->dir);
}

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

NoArvore *remover(NoArvore *raiz, char valor) {
    if (raiz == NULL) {
        return NULL;
    }

    if (valor < raiz->info) {
        raiz->esq = remover(raiz->esq, valor);
    } else if (valor > raiz->info) {
        raiz->dir = remover(raiz->dir, valor);
    } else {
        // Caso 1: sem filhos
        if (raiz->esq == NULL && raiz->dir == NULL) {
            free(raiz);
            return NULL;
        }

        // Caso 2: apenas filho � direita
        if (raiz->esq == NULL) {
            NoArvore *temp = raiz->dir;
            free(raiz);
            return temp;
        }

        // Caso 2: apenas filho � esquerda
        if (raiz->dir == NULL) {
            NoArvore *temp = raiz->esq;
            free(raiz);
            return temp;
        }

        // Caso 3: dois filhos
        NoArvore *sucessor = minimo(raiz->dir);
        raiz->info = sucessor->info;
        raiz->dir = remover(raiz->dir, sucessor->info);
    }

    return raiz;
}
