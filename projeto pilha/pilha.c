#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define PILHA_VAZIA -999999

Pilha* criarPilha(int max) {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if (p != NULL) {
        p->info = (int*) malloc(max * sizeof(int));
        if (p->info == NULL) {
            free(p);
            return NULL; // falha ao alocar vetor
        }
        p->topo = -1;
        p->capacidade = max;
    }
    return p;
}

int pilhaVazia(Pilha *p) {
    return (p->topo == -1);
}

int pilhaCheia(Pilha *p) {
    return (p->topo == p->capacidade - 1);
}

void push(Pilha *p, int elem) {
    if (pilhaCheia(p)) {
        printf("Pilha cheia!\n");
        return;
    }
    p->info[++p->topo] = elem;
}

int pop(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia!\n");
        return PILHA_VAZIA;
    }
    return p->info[p->topo--];
}

int realocarPilha(Pilha *p, int novaQtd) {
    int *temp = (int*) realloc(p->info, (p->capacidade + novaQtd) * sizeof(int));
    if (temp != NULL) {
        p->info = temp;
        p->capacidade += novaQtd;
        return 1; // sucesso
    }
    return 0; // falha
}

Pilha* liberarMemoriaPilha(Pilha *p) {
    if (p != NULL) {
        free(p->info);
        free(p);
    }
    return NULL;
}

void imprimirPilha(Pilha *p, int qtd) {
    int i, aux;
    Pilha *pAux = criarPilha(qtd);

    for (i = 0; i < qtd; i++) {
        aux = pop(p);
        if (aux == PILHA_VAZIA) break;
        printf("%d\n", aux);
        push(pAux, aux);
    }

    for (i = 0; i < qtd; i++) {
        aux = pop(pAux);
        if (aux == PILHA_VAZIA) break;
        push(p, aux);
    }

    liberarMemoriaPilha(pAux);
}

// Em pilha.c
int valorTopo(Pilha *p) {
    // Adiciona uma verificação de segurança
    if (pilhaVazia(p)) {
        printf("Erro fatal: Tentando ler topo de pilha vazia!\n");
        exit(1); // Para o programa
    }

    // Se não estiver vazia, retorna o valor
    return p->info[p->topo];
}
