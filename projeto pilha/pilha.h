#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct {
    int topo;
    int capacidade;
    int *info;
} Pilha;

Pilha* criarPilha(int max);

int realocarPilha(Pilha *p, int novaQtd);

int pilhaCheia(Pilha *p);

int pilhaVazia(Pilha *p);

void push(Pilha *p, int elem);

int pop(Pilha *p);

Pilha* liberarMemoriaPilha(Pilha *p);

void imprimirPilha(Pilha *p, int qtd);

#endif // PILHA_H_INCLUDED
