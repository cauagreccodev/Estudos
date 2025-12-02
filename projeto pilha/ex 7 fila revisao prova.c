#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *concatenar_filas_ordenadas(Fila *f1,Fila *f2){

    int qtd = f1->qtdAtual + f2->qtdAtual;
    int el1,el2;
    int aux1 = 1, aux2 = 1;

    Fila *f_res = criarFila(qtd);

    while(!filaVazia(f1) && !filaVazia(f2)){
        if(aux1 == 1){
            el1 = desenfileirar(f1);
            aux1 = 0;
        }
        if(aux2 == 1){
            el2 = desenfileirar(f2);
            aux2 = 0;
        }
        if(el1 < el2){
            enfileirar(f_res,el1);
            aux1 = 1;
        }else if(el2 < el1){
            enfileirar(f_res,el2);
            aux2 = 1;
        }else{
            enfileirar(f_res,el1);
            enfileirar(f_res,el2);
            aux1 = 1;
            aux2 = 1;
        }
    }
    while(!filaVazia(f1)){

        el1 = desenfileirar(f1);
        if(el1 < el2){
            enfileirar(f_res,el1);
        }
        else{
            enfileirar(f_res,el1);
            enfileirar(f_res,el2);
            aux2 = 1;
        }
    if(filaVazia(f1) && aux2 == 0){
        enfileirar(f_res,el2);
    }
    }
    while(!filaVazia(f2)){

        el2 = desenfileirar(f2);
        if(el2 < el1){
            enfileirar(f_res,el2);
        }
        else{
            enfileirar(f_res,el2);
            enfileirar(f_res,el1);
            aux1 = 1;
        }
    if(filaVazia(f2) && aux1 == 0){
        enfileirar(f_res,el1);
    }
    }
    return f_res;
}

int main() {
    Fila *fila1 = criarFila(10);
    Fila *fila2 = criarFila(10);
    Fila *filas = criarFila(20);
    if (fila1 != NULL && fila2 != NULL){
    enfileirar(fila1, 1);
    enfileirar(fila1, 2);
    enfileirar(fila1, 5);
    enfileirar(fila1, 20);
    enfileirar(fila1, 50);
    enfileirar(fila1, 850);
    enfileirar(fila2, 3);
    enfileirar(fila2, 4);
    enfileirar(fila2, 5);
    enfileirar(fila2, 100);
    enfileirar(fila2, 101);
    enfileirar(fila2, 103);
    }
    imprimirFila(fila1);
    printf("\n");
    imprimirFila(fila2);
    printf("\n");
    filas = concatenar_filas_ordenadas(fila1, fila2);
    printf("\n");
    imprimirFila(filas);
}
