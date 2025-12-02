#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No *trocar(No *lista,int m, int n){

    if(m==n){
        return lista;
    }

    No *anterior_m = NULL;
    No *no_m = lista;
    No *anterior_n = NULL;
    No *no_n = lista;

    while(no_m != NULL && no_m->info != m){
        anterior_m = no_m;
        no_m = no_m->prox;
    }

    while(no_n != NULL && no_n->info != n){
        anterior_n = no_n;
        no_n = no_n->prox;
    }

    if(no_m == NULL || no_n == NULL){
        return lista;
    }

    if(anterior_m != NULL){
        anterior_m->prox = no_n;
    }else{
        lista = no_n;
    }

    if(anterior_n != NULL){
        anterior_n->prox = no_m;
    }else{
        lista = no_m;
    }

    No *temp = no_m->prox;
    no_m->prox = no_n->prox;
    no_n->prox = temp;

    return lista;
}

//ou

void trocar_elem(No *lista, int m, int n) {
    No *p = lista;
    No *no_m = NULL;
    No *no_n = NULL;

    // Acha os dois nós
    while (p != NULL) {
        if (p->info == m)
            no_m = p;
        else if (p->info == n)
            no_n = p;

        p = p->prox;
    }

    // Se achou os dois, troca
    if (no_m != NULL && no_n != NULL) {
        int temp = no_m->info;
        no_m->info = no_n->info;
        no_n->info = temp;
    }
}


int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_final(lista, 20);
    lista = inserir_final(lista, 10);
    lista = inserir_final(lista, 3);
    lista = inserir_final(lista, 2);
    lista = inserir_final(lista, 1);

    imprimirlista(lista);

    trocar_elem(lista,20,10);

    imprimirlista(lista);

    return 0;
}
