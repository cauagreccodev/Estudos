#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void contar_todas_ocorrencias(No *lista){
    No *p = lista;

    while(p!=NULL){

        int cont = 0;
        No *q = lista;

        while(q != NULL){
            if(q->info == p->info){
                cont++;
            }
            q = q->prox;
        }
    printf("%d apareceu %d vezes\n",p->info,cont);
    p = p->prox;
    }
}

int main() {
    No *lista = criar_lista_vazia();
    int val;

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 2);
    lista = inserir_inicio(lista, 3);

    imprimirlista(lista);

    contar_todas_ocorrencias(lista);

    return 0;
}
