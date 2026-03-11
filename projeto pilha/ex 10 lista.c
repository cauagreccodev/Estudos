#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int contar_ocorrencias(No *lista,int valor){

    No *p = lista;
    int c = 0;
    if(lista_vazia(lista)){
        printf("lista VAZIA");
        return 0;
    }else{
        while(p != NULL){
            if(valor == p->info){
                c++;
            }
            p = p->prox;
        }
    }
    return c;
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

    printf("qual elemento deseja contar? ");
    scanf("%d",&val);

    printf("O numero %d aparece %d vezes",val,contar_ocorrencias(lista,val));
    return 0;
}


