#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int remover_par(No *lista) {
    No *p = *lista;
    No *anterior = NULL;
    int removidos = 0;

    if (lista_vazia(*lista)) {
        printf("\nLISTA VAZIA!!!\n");
        return 0;
    }

    while (p != NULL) {
        if (p->info % 2 == 0) { // se for par
            if (anterior == NULL) {
                *lista = p->prox; // remove o primeiro
                free(p);
                p = *lista;
            } else {
                anterior->prox = p->prox;
                free(p);
                p = anterior->prox;
            }
            removidos++;
        } else {
            anterior = p;
            p = p->prox;
        }
    }

    return removidos;
}



int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 4);
    lista = inserir_inicio(lista, 5);

    imprimirlista(lista);

    int removidos = remover_par(&lista);

    imprimirlista(lista);
    printf("\nForam removidos %d numeros pares\n", removidos);

    liberar_lista(lista);
    return 0;
}
