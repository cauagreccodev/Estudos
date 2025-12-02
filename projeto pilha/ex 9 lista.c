#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int maior_topo(No *lista){
    No *p = lista;
    int maior = p->info;

    if(lista_vazia(lista)){
        printf("lista VAZIA!!!");
        return 0;
    }else{
        while(p!=NULL){
            if(p->info > maior){
                maior = p->info;
            }
            p=p->prox;
        }
    remover_elemento(lista,maior);
    inserir_final(lista,maior);
    }
    return maior;
}

int main() {
    No *lista = criar_lista_vazia();

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 3);
    lista = inserir_inicio(lista, 2);
    lista = inserir_inicio(lista, 3);

    imprimirlista(lista);

    maior_topo(lista);

    imprimirlista(lista);
    return 0;
}
