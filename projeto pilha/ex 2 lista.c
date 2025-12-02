#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int contar_elem(No *lista){

    No *p;
    int c = 0;
    if(lista_vazia(lista)){
        printf("\nLista Vazia!!!\n");
        return 0;
    }else{
        for(p = lista;p != NULL;p = p->prox){
            c++;
        }
    return c;
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

    int qtd_elem = contar_elem(lista);

    printf("%d",qtd_elem);

    liberar_lista(lista);
    return 0;
}
