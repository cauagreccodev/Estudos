#ifndef PILHA_H
#define PILHA_H
typedef struct {
int topo;

int capacidade;

int *info;

}Pilha;
Pilha* criarPilha (int max);

int realocarPilha(Pilha *p, int novaQtd);

int pilhaCheia(Pilha *p);

void push(Pilha *p, int elem);

int pilhaVazia(Pilha *p);

int pop (Pilha *p);

Pilha* liberarMemoriaPilha(Pilha *p);
void imprimirPilha(Pilha *p, int qtd);
#endif
