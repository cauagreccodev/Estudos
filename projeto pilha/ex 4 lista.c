#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int remover_todos_elem(No *lista){

    No *p;
    if(lista_vazia(lista)){
        printf("LISTA VAZIA!!!");
        return 0;
    }
    else{
        while(p->prox!=NULL)
        {
            remover_elemento(lista,p->prox);
        }
    return lista;  
    }
}

int main(){

    No *lista;
    lista=criar_lista_vazia();

    imprimirlista(lista);
    printf("\n");

    lista = inserir_inicio(lista,10);
    lista = inserir_inicio(lista,20);
    lista = inserir_inicio(lista,3);
    lista = inserir_inicio(lista,4);
    lista = inserir_inicio(lista,5);

    printf("\n");

    imprimirlista(lista);

    lista = remover_todos_elem(lista);

    imprimirlista(lista);

    liberar_lista(lista);
    return 0;
}
