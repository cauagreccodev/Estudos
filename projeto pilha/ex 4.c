#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int pilha_igual(Pilha *p,Pilha *p2){

    if (p == NULL || p2 == NULL){
        return 0;
    }

    if(p ->topo != p2 -> topo){
        return 0;
    }

    for (int i=0;i <= p->topo;i++){

        if(p->info[i] != p2->info[i]){
            return 0;
        }
    }

    return 1;
}

int main(){

    Pilha *p_a = criarPilha(10);
    Pilha *p_b = criarPilha(10);

    push(p_a,5);
    push(p_a,2);
    push(p_a,3);
    push(p_a,4);
    push(p_a,1);

    push(p_b,5);
    push(p_b,2);
    push(p_b,3);
    push(p_b,4);

    if(pilha_igual(p_a,p_b)){
        printf("valores iguais!!!");
    }else{
        printf("valores diferentes!!!");
    }

    liberarMemoriaPilha(p_a);
    liberarMemoriaPilha(p_b);

    return 0;
}
