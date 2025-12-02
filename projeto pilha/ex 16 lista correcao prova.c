#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No *remover_ocorrencias(No *lista,int x){
    No *p = lista;
    No *ant = NULL;

    if(lista_vazia(lista)){
        return 0;
    }else{
        while(p != NULL){
           if(p->info == x){
                No *temp = p;
                if(ant == NULL){
                    lista = p->prox;
                    p = lista; // reatualiza o valor de p la em cima
                }else{
                    ant->prox = p->prox;
                    p = p->prox;
                }
                free(temp);
           }else{
                ant = p;
                p = p->prox;
           }
        }
    }
    return lista;
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

    lista = remover_ocorrencias(lista,3);

    imprimirlista(lista);

    return 0;
}
