#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *concatenar_pilhas_ordenadas(Pilha *p1, Pilha *p2){
    int qtd = p1->capacidade + p2->capacidade;
    Pilha *p_res = criarPilha(qtd);

    if(pilhaVazia(p1) && pilhaVazia(p2)){
        return 0;
    }else{
        while (!pilhaVazia(p1) && !pilhaVazia(p2)){

            int el1 = pop(p1);
            int el2 = pop(p2);

            if(el1 >= el2){
                push(p_res,el1);
                push(p_res,el2);
            }else{
                push(p_res,el2);
                push(p_res,el1);
            }
        }

        while (!pilhaVazia(p1)){
            push(p_res,pop(p1));
        }
        while (!pilhaVazia(p2)){
            push(p_res,pop(p2));
        }
    }
    return p_res;
}

int main () {
    Pilha *pilha1, *pilha2;
    Pilha *pilhas;

    pilha1 = criarPilha(10);
    pilha2 = criarPilha(10);

    if (pilha1 != NULL && pilha2 !=NULL){
    push (pilha1, 1);
    push (pilha1, 2);
    push (pilha1, 7);
    push (pilha1, 10);
    push (pilha1, 20);
    push (pilha1, 100);
    push (pilha2, 3);
    push (pilha2, 4);
    push (pilha2, 15);
    push (pilha2, 21);
    }

    imprimirPilha(pilha1, 6);
    printf("\n");
    imprimirPilha(pilha2, 4);
    printf("\n");
    pilhas = concatenar_pilhas_ordenadas(pilha1, pilha2);
    imprimirPilha(pilhas, 10);
    liberarMemoriaPilha(pilha1);
    liberarMemoriaPilha(pilha2);
    liberarMemoriaPilha(pilhas);
}
