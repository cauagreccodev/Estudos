#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int media(No *lista){
    No *p = lista;
    int c = 0;
    int soma = 0;

    if(lista_vazia(lista)){
        printf("lista VAZIA!!!");
        return 0;
    }else{
        while(p != NULL){
            soma += p->info;
            c++;
            p = p->prox;
        }
}
    return soma/c;
}

int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 2);
    lista = inserir_inicio(lista, 3);

    imprimirlista(lista);

    printf("A media e igual a %d\n",media(lista));
    return 0;
}
