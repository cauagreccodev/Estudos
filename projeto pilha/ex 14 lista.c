#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int search(int *l,int x){

    No *p = l;

    while(p!= NULL){
        if(p->info == x){
        return p;
        }
        p= p->prox;
    }
    return NULL;
}

int searchinsert(int *l,int x){

    No *p = search(*l,x);
    if(p!=NULL){
        return p;
    }

    No *novo = (No*) malloc(sizeof(No));
    novo->info = x;
    novo->prox = l;
    *l = novo;

    return novo;
}

int main() {

    No *lista = NULL;

    // inserindo alguns valores manualmente só pra testar
    No *n1 = malloc(sizeof(No));
    n1->info = 10;
    n1->prox = NULL;
    lista = n1;

    No *n2 = malloc(sizeof(No));
    n2->info = 20;
    n2->prox = lista;
    lista = n2;

    // --- TESTANDO SEARCH ---
    No *p = search(lista, 10);

    if(p != NULL){
        printf("Achei o valor %d na lista!\n", p->info);
    } else {
        printf("Valor nao encontrado.\n");
    }

    // --- TESTANDO SEARCHINSERT ---
    No *q = searchinsert(&lista, 30);  // 30 nao existe → sera inserido

    printf("Searchinsert retornou o no com %d\n", q->info);

    // Se chamar de novo com o mesmo valor:
    No *r = searchinsert(&lista, 30);  // já existe → nao reinsere
    printf("Searchinsert retornou o mesmo no com %d\n", r->info);

    return 0;
}
