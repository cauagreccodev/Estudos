#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int imp_par_f(Fila *f,Fila *f_p,Fila *f_im){

    for(int i=0;i<=f->fim;i++){
        if(f->info[i]%2==0){
            enfileirar(f_p,f->info[i]);
        }
    }

    for(int i=0;i<=f->fim;i++){
        if(f->info[i]%2!=0){
            enfileirar(f_im,f->info[i]);
        }
    }

    liberarMemoriaFila(f);
    return f_p,f_im;
}

int main(){
    Fila *f = criarFila(10);
    Fila *f_par = criarFila(10);
    Fila *f_impar = criarFila(10);

    enfileirar(f,3);
    enfileirar(f,9);
    enfileirar(f,10);
    enfileirar(f,2);

    for(int i=0;i<f->qtdAtual;i++){
        printf("%d ",f->info[i]);
    }
    printf("\n");

    imp_par_f(f,f_par,f_impar);

    for(int i=0;i < f_par->qtdAtual;i++){
        printf("%d ",f_par->info[i]);
    }
    printf("\n");

    for(int i=0;i<f_impar->qtdAtual;i++){
        printf("%d ",f_impar->info[i]);
    }
    printf("\n");

}
