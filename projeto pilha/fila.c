#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criarFila(int qtd) {
    Fila *f;
    f = (Fila*) malloc(sizeof(Fila));
    if (f != NULL) {
    f->info = (int*) malloc(qtd * sizeof(int));
    if (f->info != NULL){
    f->inicio = 0;
    f->fim = -1;
    f->qtdAtual = 0;
    f->capacidade = qtd;
    return f;
    }
} else
return NULL;
}

int filaCheia(Fila *fila){
    if (fila->qtdAtual == fila->capacidade)
    return 1;
    else
    return 0;
}

int enfileirar(Fila *fila, int elem){
    if (filaCheia(fila)){
        printf("Fila cheia.\n");
        return 0;
    } else {
        fila->fim++;
        fila->info[fila->fim] = elem;
        fila->qtdAtual++;
        return 1;
    }
}

int filaVazia(Fila *fila) {
    if (fila->qtdAtual == 0)
    return 1;
    else
    return 0;
}

int desenfileirar(Fila *fila) {
    int primElem;
    if (filaVazia(fila)) {
        printf("Fila vazia.\n");
        return 0;
    } else {
        primElem = fila->info[fila->inicio];
        fila->inicio++;
        fila->qtdAtual--;
        return primElem;
    }
}

void imprimirFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return;
    }

    int i = f->inicio;
    int count = 0;
    while (count < f->qtdAtual) {
        printf("%d ", f->info[i]);
        i = (i + 1) % f->capacidade; // comportamento circular
        count++;
    }
    printf("\n");
}



Fila* liberarMemoriaFila(Fila *fila) {
    free(fila);
    return NULL;
}
