#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No *duplicar_lista(No *lista){

    No *pAux = lista;
    No *pAuxProx;

    if(lista_vazia(lista)){
        return NULL;
    }else{
        while(pAux != NULL){
            pAuxProx = pAux->prox;
            lista = inserir_meio(lista,pAux->info,pAux);
            pAux = pAuxProx;
        }
    }
    return lista;
}

int main() {

    No *lista = criar_lista_vazia();

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 4);
    lista = inserir_inicio(lista, 5);

    imprimirlista(lista);
    printf("\n");

    duplicar_lista(lista);

    imprimirlista(lista);
    printf("\n");
}
