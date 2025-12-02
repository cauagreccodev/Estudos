#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int contar_elem(Pilha *p){
    if(p == NULL) 
        return 0;
    else{
        return p->topo+1;
    }
}

int main(){
Pilha *p = criarPilha(10);

push(p, 5);
push(p, 8);
push(p, 2);

printf("A pilha tem %d elementos\n", contar_elem(p));
}
