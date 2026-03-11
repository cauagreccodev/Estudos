#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"

int inverter_elem(Fila *f){

    Pilha *p = criarPilha(f->qtdAtual);

    for(int i=0;i < f->qtdAtual;i++){

        push(p,f->info[i]);
    }

    for(int i=0;i < f->qtdAtual;i++){

        f->info[i] = pop(p);
    }

    liberarMemoriaPilha(p);
    return f;
}

int main(){

    Fila *f = criarFila(10);

    enfileirar(f,30);
    enfileirar(f,1);
    enfileirar(f,20);

    for (int i=0;i < f->qtdAtual;i++){
        printf("%d ",f->info[i]);
    }

    printf("\n");

    inverter_elem(f);

    for (int i=0;i < f->qtdAtual;i++){
        printf("%d ",f->info[i]);
    }

    printf("\n");

    liberarMemoriaFila(f);
    return 0;
}
