#ifndef PILHANUM_H_INCLUDED
#define PILHANUM_H_INCLUDED

#define MAX 100 // Define o tamanho máximo (100) usado para pilhas e fila

typedef struct {
    float itens[MAX]; // Estrutura e funções para armazenar operandos (valores float)
    int topo;
} PilhaNum;

void initPilhaNum(PilhaNum *p);

int vaziaNum(PilhaNum *p);

void empilhaNum(PilhaNum *p, float v);

float desempilhaNum(PilhaNum *p);

#endif // PILHANUM_H_INCLUDED
