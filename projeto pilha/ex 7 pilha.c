#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha *p = criarPilha(10);

    int valor;
    push(p,5);
    push(p,4);
    push(p,7);
    push(p,1);
    push(p,2);

    printf("QUAL VALOR VOCE DESEJA BUSCAR?");
    scanf("%d", &valor);

    Pilha *aux = criarPilha(10);
    int encontrado = 0;

    while(!pilhaVazia(p)){

        int valorDoTopo = valorTopo(p);
        pop(p);

        if (valorDoTopo == valor)
        {
            encontrado = 1;
        }else{
            push(aux,valorDoTopo);
        }

    }

    while(!pilhaVazia(aux)){
        int valorDoTopo = valorTopo(aux);
        pop(aux);
        push(p,valorDoTopo);
    }

    if(encontrado){
        printf("VALOR ENCONTRADO!!!\n");
    }else{
        printf("VALOR NAO ENCONTRADO!!!\n");
    }
    liberarMemoriaPilha(p);
    liberarMemoriaPilha(aux);

}
