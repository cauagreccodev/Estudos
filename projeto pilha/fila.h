#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define MAX 100

typedef struct {
int inicio;

int fim;

int qtdAtual;

int capacidade;

int *info;
}Fila;

Fila* criarFila(int qtd);

int filaCheia(Fila *fila);

int enfileirar(Fila *fila, int elem);

int filaVazia(Fila *fila);

int desenfileirar(Fila *fila);

Fila* liberarMemoriaFila(Fila *fila);

#endif // FILA_H_INCLUDED
