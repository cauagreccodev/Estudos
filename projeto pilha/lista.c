#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No *criar_lista_vazia() {
    return NULL;
}

int lista_vazia(No *lista) {
    return (lista == NULL);
}

No *criar_no(int val) {
    No *no = (No*) malloc(sizeof(No));
    if (no == NULL)
        exit(1);
    no->info = val;
    no->prox = NULL;
    return no;
}

No *inserir_inicio(No *lista, int val) {
    No *no = criar_no(val);
    no->prox = lista;
    return no;
}

No *inserir_final(No *lista, int val) {
    No *no = criar_no(val);
    if (lista_vazia(lista))
        return no;
    else {
        No *aux = lista;
        while (aux->prox != NULL)
            aux = aux->prox;
        aux->prox = no;
        return lista;
    }
}

No *inserir_meio(No *lista, int val, No *q) {
    No *no, *aux = lista;
    while ((aux != NULL) && (aux != q))
        aux = aux->prox;
    if (aux != NULL) {
        no = criar_no(val);
        no->prox = aux->prox;
        aux->prox = no;
    }
    return lista;
}

No *buscar_elemento(No *lista, int val) {
    No *aux = lista;
    while (aux != NULL) {
        if (aux->info == val)
            return aux;
        aux = aux->prox;
    }
    return NULL;
}

No *liberar_lista(No *lista) {
    No *aux;
    while (lista != NULL) {
        aux = lista;
        lista = lista->prox;
        free(aux);
    }
    return NULL;
}

No *remover_elemento(No *lista, int x) {
    No *ant = NULL, *aux = lista;
    while ((aux != NULL) && (aux->info != x)) {
        ant = aux;
        aux = aux->prox;
    }
    if (aux == NULL)
        return lista;

    if (ant == NULL)
        lista = aux->prox;
    else
        ant->prox = aux->prox;

    free(aux);
    return lista;
}

// CORREÇÃO PARA IMPRIMIR LISTA (Evita a mistura de saída)
void imprimirlista(No *lista){
    No *p;
    if(lista_vazia(lista)){
        printf("Lista Vazia!!!\n"); // Adicionar '\n' aqui é bom
    }else{
        for(p = lista;p!=NULL;p=p->prox){
            printf("%d ",p->info);
        }
        printf("\n"); // <--- ESSENCIAL: Adicionar quebra de linha após a lista
    }
}

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
