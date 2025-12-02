#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

    Fila *f = criarFila(10);

    enfileirar(f,30);
    enfileirar(f,1);
    enfileirar(f,20);

    int maior = f->info[0];
    int menor = f->info[0];

    for(int i=0;i < f->fim;i++){
        if(f->info[i] > maior){
            maior = f->info[i];
        }
    }

    for(int i=0;i < f->fim;i++){
        if(f->info[i] < menor){
            menor = f->info[i];
        }
    }

    printf("o maior valor e %d\n",maior);
    printf("o menor valor e %d\n",menor);

    liberarMemoriaFila(f);
    return 0;
}
