#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void separa_pilhas(Pilha *f,Pilha *pares,Pilha *impares){

    Pilha *aux = criarPilha(10);
    int valor;

    while (!pilhaVazia(f))
    {
        int valor = f->info[f->topo];

        pop(f);
        push(aux,valor);
    }
    while (!pilhaVazia(aux)){

        int valor = aux->info[aux->topo];

        pop(aux);

        if(valor%2==0){
            push(pares,valor);
        }else{
            push(impares,valor);
        }
        push(f,valor);
    }
    liberarMemoriaPilha(aux);
}
int main(){

    Pilha *p = criarPilha(10);
    Pilha *par = criarPilha(10);
    Pilha *impar = criarPilha(10);

    push(p,5);
    push(p,4);
    push(p,7);
    push(p,1);
    push(p,2);

    imprimirPilha(p,5);
    printf("\n");

    separa_pilhas(p,par,impar);

    imprimirPilha(par,5);
    printf("\n");

    imprimirPilha(impar,5);
    printf("\n");
}
