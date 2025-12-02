#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct No{
int info;
struct No *prox;
} No;

No *criar_lista_vazia();

int lista_vazia(No *lista);

No *criar_no(int val);

No *inserir_inicio(No *lista, int val);

No* inserir_final(No *lista, int val);

No *inserir_meio(No *lista, int val, No *q);

No *buscar_elemento(No *lista, int val);

No *liberar_lista(No *lista);

No *remover_elemento(No *lista, int x);

void imprimirlista(No *lista);

int contar_elem(No *lista);

#endif // LISTA_H_INCLUDED
