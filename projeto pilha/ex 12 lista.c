#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No *inserir_crescente(No *lista,int elem){
    No *no = criar_no(elem);
    No *p = lista;

    if(lista_vazia(lista)){
        return no;
    }

    if(elem < lista->info){
        inserir_inicio(lista,elem);
        return no;
    }

    while(p->prox == NULL && p->prox->info < elem){
        p = p->prox;
    }

    no->prox = p->prox;
    p->prox = no;

    return lista;
}

int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 2);
    lista = inserir_inicio(lista, 1);

    imprimirlista(lista);

    lista = inserir_crescente(lista,1);

    imprimirlista(lista);

    return 0;
}
