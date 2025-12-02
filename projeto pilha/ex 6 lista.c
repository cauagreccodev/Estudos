#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int remover_repetidos(No *lista){
    No *p = lista;
    int removidos = 0;

    if(lista_vazia(lista)){
        printf("lista vazia!!!");
        return 0;
    }
    while(p != NULL){
        No *anterior = p;
        No *q = p->prox;
        while (q != NULL){
            if(q->info == p->info){
                
                anterior->prox = q->prox;
                free(q);
                q = anterior->prox;
                removidos++;
            }else{
                anterior = q;
                q = q->prox;
            }
        }
        p = p->prox;
    }
    return removidos;
}

int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 2);
    lista = inserir_inicio(lista, 3);

    imprimirlista(lista);

    int removidos = remover_repetidos(lista);

    imprimirlista(lista);
    printf("\nForam removidos %d repetidos\n", removidos);

    liberar_lista(lista);
    return 0;
}
