#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int remover_elem(Pilha *p,int elem,int qtd){

    Pilha *pAux = criarPilha(qtd);
    int aux;

    while (!pilhaVazia(p))
    {
        aux = pop(p);
        push(pAux,p->info);
        if(aux != elem){
            push(pAux,aux);
        }else{
            while(!pilhaVazia(pAux)){
                push(p,pAux->info);
                pop(pAux);
            return 1;
            }
        }
    }
    if(pop(p)!= elem){
        while(!pilhaVazia(pAux)){
            push(p,pAux->info);
            pop(pAux);
            }
        return 0;
    }
}

int main(){
Pilha *p = criarPilha(10);
int n;
push(p, 5);
push(p, 8);
push(p, 2);

    printf("qual elemento deseja remover?");
    scanf("%d",&n);

    if(remover_elem(p,n,10)){
        printf("ELEMENTO ENCONTRADO!!!");
    }
    else{
        printf("ELEMENTO NAO ENCONTRADO!!!");
    }
}
