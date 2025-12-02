#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
typedef struct NoArvore {
int info;
struct No *esq;
struct No *dir;
} NoArvore;

NoArvore *criar_arvore(char c);

int arvore_vazia(NoArvore *raiz);

NoArvore *inserir_abb(NoArvore *raiz, int V);

NoArvore *minimo(NoArvore *raiz);

NoArvore *maximo (NoArvore *raiz);

NoArvore *remover(NoArvore *raiz, char valor);

void percurso_pre_ordem(NoArvore *raiz);

void percurso_em_ordem(NoArvore *raiz);

void percurso_pos_ordem(NoArvore *raiz);

#endif // ARVORE_H_INCLUDED
