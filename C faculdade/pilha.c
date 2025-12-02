#include <stdio.h>
#include "pilha.h"
Pilha* criarPilha (int max) {
Pilha *p;
p = (Pilha*) malloc(sizeof(Pilha));
if (p != NULL) {
p->info = (int*) malloc(max * sizeof(int));
if (p->info == NULL)
return NULL;//pilha n o criada�
else{
p->topo = -1;
p->capacidade = max;
return p; //pilha criada
}
} else {
return NULL;
}
}

int pilhaVazia(Pilha *p) {
if (p->topo == -1)
return 1; //verdadeiro - pilha vazia
else
return 0; //falso pilha com elemento
}

int pop (Pilha *p) {
if (pilhaVazia(p)) {
printf("Pilha vazia!\n");
return -99999999999;
}else {
int elem = p->info[p->topo];
p->topo--;
return elem;
}
}

Pilha* liberarMemoriaPilha(Pilha *p) {
free(p);
return NULL;
}

int pilhaCheia(Pilha *p) {
if (p->topo == (p->capacidade - 1))
return 1; //pilha cheia
else
return 0;
}

int realocarPilha(Pilha *p, int novaQtd) {
int *temp;
temp = (int*) realloc(p->info, (p->capacidade + novaQtd) * sizeof(int));
if(temp != NULL) {
p->info = temp;
p->capacidade += novaQtd;
return 1;// deu certo
} else
return 0;
}

void push(Pilha *p, int elem) {
if (pilhaCheia(p)) {
printf("Pilha cheia");
//return 0; //insercao nao realizada
} else {
//printf("Tem espaco\n");
p->topo++;
p->info[p->topo] = elem;
//return 1;//elemento inserido
}
}

void imprimirPilha(Pilha *p, int qtd) {
int i, aux;
Pilha *pAux;
pAux = criarPilha(qtd);
for (i=0; i<qtd; i++) {
aux = pop(p);
printf("%d\n", aux);
push(pAux, aux);
}
for (i=0;i<qtd; i++){
aux = pop(pAux);
if (aux != -99999999999)
push(p, aux);
else
break;
}
liberarMemoriaPilha(pAux);
}