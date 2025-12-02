#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"

void inverter_vet(int vet[],int tamanho){

    Pilha *p_vet = criarPilha(tamanho);
    Fila *f_vet = criarFila(tamanho);
    
    for(int i=0;i<tamanho;i++){
       push(p_vet,vet[i]);
    }

    for(int i=0;i <tamanho;i++){
        f_vet->info[i] = pop(p_vet);
    }


    for(int i=0;i<tamanho;i++){
        vet[i] = f_vet->info[i];
    }

    liberarMemoriaFila(f_vet);
    liberarMemoriaPilha(p_vet);
}

int main(){
    
    int vet[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    printf("Vetor: ");
    for (int i=0;i<tamanho;i++){
       printf("%d ",vet[i]);
    }
    printf("\n");

    inverter_vet(vet, tamanho);

    printf("Vetor invertido: ");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vet[i]);
    printf("\n");

    return 0;
}

