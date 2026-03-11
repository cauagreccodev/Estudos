#include <stdio.h>
#include "pilha.h"

int main(){
    Pilha *pilha = criarPilha(10);

    if (pilhaVazia(pilha)){
        printf("pilha VAZIA!");
    }else{
        printf("pilha nao esta vazia");
    }
    
    push(pilha,5);

    if (pilhaVazia(pilha)){
        printf("pilha VAZIA!");
    }else{
        printf("pilha nao esta vazia");
    }

    printf("%d desempilhado",pop(pilha));
}