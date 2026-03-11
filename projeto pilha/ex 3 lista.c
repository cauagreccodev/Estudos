#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void lista_igual(No *lista_1,No *lista_2){

    No *p_1;
    No *p_2;
    int iguais;

    int valor_1;
    int valor_2;
    if(lista_vazia(lista_1) || lista_vazia(lista_2)){
        printf("\nLista Vazia!!\n");

    }else{
        for(p_1 = lista_1,p_2 = lista_2;p_1 != NULL && p_2 != NULL;p_1 = p_1->prox,p_2 = p_2->prox){

        if (p_1->info == p_2->info){
            iguais = 1;
        }
        else{
            iguais = 0;
            break;
        }
        }
    }
    
    if (p_1 != NULL || p_2 != NULL)
        iguais = 0;

    if(iguais){
        printf("sao iguais!!!");
    }else{
        printf("sao diferentes!!!");
    }
}

int main() {

    No *lista = criar_lista_vazia();
    No *lista_2 = criar_lista_vazia();

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 4);
    lista = inserir_inicio(lista, 5);

    lista_2 = inserir_inicio(lista_2, 10);
    lista_2 = inserir_inicio(lista_2, 20);
    lista_2 = inserir_inicio(lista_2, 3);
    lista_2 = inserir_inicio(lista_2, 4);


    lista_igual(lista, lista_2);

    liberar_lista(lista);
    liberar_lista(lista_2);
    return 0;
}
