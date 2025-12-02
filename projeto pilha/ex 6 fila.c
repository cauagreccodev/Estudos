#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"

void inverter_elem(Fila *f){

    int n = f->qtdAtual;
    Pilha *p = criarPilha(f->qtdAtual);

    for(int i=0;i < n;i++){

        push(p,desenfileirar(f));
    }

    for(int i=0;i < n;i++){

        enfileirar(f,pop(p));
    }

    liberarMemoriaPilha(p);
}

int main(){

    Pilha *p = criarPilha(10);

    Fila *f_inverte_pilha = criarFila(10);

    push(p,10);
    push(p,2);
    push(p,1);
    push(p,90);
    push(p,30);

    imprimirPilha(p,5);

    printf("\n");

    while(!pilhaVazia(p)){

        enfileirar(f_inverte_pilha,pop(p));
    }

    imprimirFila(f_inverte_pilha);

    printf("\n");

    inverter_elem(f_inverte_pilha);

    imprimirFila(f_inverte_pilha);

    printf("\n");

    for (int i=0;i<f_inverte_pilha->qtdAtual;i++){

        push(p,f_inverte_pilha->info[i]);
    }

    imprimirPilha(p,5);

    liberarMemoriaFila(f_inverte_pilha);
    liberarMemoriaPilha(f_inverte_pilha);
    return 0;
}
