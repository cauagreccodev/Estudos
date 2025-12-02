#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *copia (Pilha *p){

    Pilha *cp = criarPilha(p->capacidade);

    for(int i = 0; i <= p->topo;i++){
        push(cp,p->info[i]);
    }
    printf("COPIA CRIADA COM SUCESSO!!!\n");
    return cp;
}

int main(){

    Pilha *p = criarPilha(10);

    push(p,5);
    push(p,4);
    push(p,2);
    push(p,1);
    push(p,2);

    imprimirPilha(p,5);

    Pilha *cp = copia(p);
    imprimirPilha(cp,5);
}
