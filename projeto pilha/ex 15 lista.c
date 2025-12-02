#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void Inverte(No **lista){
    No *ant = NULL;
    No *p = *lista;
    No *proximo = NULL;

    while(p != NULL){
        proximo = p->prox;
        p->prox = ant;
        ant = p;
        p = proximo;
    }
    *lista = ant;
}

int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_final(lista, 20);
    lista = inserir_final(lista, 10);
    lista = inserir_final(lista, 3);
    lista = inserir_final(lista, 2);
    lista = inserir_final(lista, 1);

    imprimirlista(lista);

    Inverte(&lista);

    imprimirlista(lista);

    return 0;
}
