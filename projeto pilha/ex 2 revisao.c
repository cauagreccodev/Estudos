#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *copia (Fila *fila){

    Fila *fcopia;

    int cont = 0, qtdfAtual, elemAux;

    fcopia = criarFila(fila->qtdAtual);

    fcopia->inicio = fila->inicio;
    
    qtdfAtual = fila->qtdAtual;

    if(filaVazia(fila)){
        printf("NAO HA NADA A SER COPIADO!!!");
        return NULL;
    }else{
        while(cont != qtdfAtual){
            elemAux = desenfileirar(fila);
            enfileirar(fcopia,elemAux);
            enfileirar(fila,elemAux);
            cont++;
        }
        return fcopia;
    }
}

int main(){
    Fila *f = criarFila(10);
    Fila *fcopia = criarFila(10);

    enfileirar(f,10);
    enfileirar(f,3);
    enfileirar(f,2);
    enfileirar(f,5);
    enfileirar(f,1);

    fcopia = copia(f);

    for(int i=0;i<5;i++){
        printf("\noriginal %d",desenfileirar(f));
        printf("\ncopia %d",desenfileirar(fcopia));
        printf("\n");
    }
}
