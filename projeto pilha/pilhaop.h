#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#define MAX 100

typedef struct {
    char itens[MAX]; // Estrutura para armazenar operadores (+, -, *, /, ^, etc.)
    int topo;
} PilhaOp;

void initPilhaOp(PilhaOp *p);

int vaziaOp(PilhaOp *p);

void empilhaOp(PilhaOp *p, char v);

char desempilhaOp(PilhaOp *p);

char topoOp(PilhaOp *p);


#endif // PILHA_H_INCLUDED
