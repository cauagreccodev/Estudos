#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void contar_ocorrencias(No *lista){
    No *p = lista;
    int c = 0;

    while(p != NULL){
        No *q = lista;
        int c = 0;

        while(q!=NULL){
            if(q->info == p->info){
            c++;
            }
            q = q->prox;
        }
        printf("%d apareceu %d vezes\n",p->info,c);
        p = p->prox;
    }
    return c;
}

int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_final(lista, 20);
    lista = inserir_final(lista, 10);
    lista = inserir_final(lista, 3);
    lista = inserir_final(lista, 2);
    lista = inserir_final(lista, 3);

    imprimirlista(lista);

    contar_ocorrencias(lista);

    return 0;
}
