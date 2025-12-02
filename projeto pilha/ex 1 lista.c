#include <stdio.h>
#include <stdlib.h>
#include "lista.h"



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

    imprimirlista(lista);

}
