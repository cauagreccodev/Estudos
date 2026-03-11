#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------------------- PILHA DE NÚMEROS ----------------------
#define MAX 100 // Define o tamanho máximo (100) usado para pilhas e fila

typedef struct {
    float itens[MAX]; // Estrutura e funções para armazenar operandos (valores float)
    int topo;
} PilhaNum;

void initPilhaNum(PilhaNum *p) {
    p->topo = -1;
}

int vaziaNum(PilhaNum *p) {
    return p->topo == -1;
}

void empilhaNum(PilhaNum *p, float v) {
    if (p->topo < MAX - 1)
        p->itens[++p->topo] = v;
}

float desempilhaNum(PilhaNum *p) {
    if (!vaziaNum(p))
        return p->itens[p->topo--];
    return 0;
}

// ---------------------- PILHA DE OPERADORES ----------------------
typedef struct {
    char itens[MAX]; // Estrutura para armazenar operadores (+, -, *, /, ^, etc.)
    int topo;
} PilhaOp;

void initPilhaOp(PilhaOp *p) {
    p->topo = -1;
}

int vaziaOp(PilhaOp *p) {
    return p->topo == -1;
}

void empilhaOp(PilhaOp *p, char v) {
    if (p->topo < MAX - 1)
        p->itens[++p->topo] = v;
}

char desempilhaOp(PilhaOp *p) {
    if (!vaziaOp(p))
        return p->itens[p->topo--];
    return 0;
}

char topoOp(PilhaOp *p) {
    if (!vaziaOp(p))
        return p->itens[p->topo];
    return 0;
}

// ---------------------- FILA (para saída pós-fixa) ----------------------
typedef struct {
    char itens[MAX][20]; // Armazena tokens (números e operadores) na ordem pós-fixa
    int ini, fim;
} Fila;

void initFila(Fila *f) {
    f->ini = 0;
    f->fim = 0;
}

void enfileira(Fila *f, char *token) {
    strcpy(f->itens[f->fim++], token);
}

int filaVazia(Fila *f) {
    return f->ini == f->fim;
}

char* desenfileira(Fila *f) {
    if (!filaVazia(f))
        return f->itens[f->ini++];
    return NULL;
}

// ---------------------- FUNÇÕES AUXILIARES ----------------------
int ehOperador(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedencia(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

// potência simples (sem math.h)
float potencia(float base, float expoente) {
    float r = 1;
    // Implementa potência por multiplicação iterativa
    for (int i = 0; i < (int)expoente; i++)
        r *= base;
    return r;
}

// ---------------------- CONVERSÃO INFIXA ? PÓS-FIXA ----------------------
void infixaParaPosfixa(char expr[], Fila *saida) {
    PilhaOp pilha;
    initPilhaOp(&pilha);

    int i = 0;
    char num[20];
    int j;

    while (expr[i] != '\0') {
        // Se for número (sem usar isdigit)
        if (expr[i] >= '0' && expr[i] <= '9') {
            j = 0;
            while (expr[i] >= '0' && expr[i] <= '9') {
                num[j++] = expr[i++];
            }
            num[j] = '\0';
            enfileira(saida, num);
            continue;
        }

        if (expr[i] == '(') {
            empilhaOp(&pilha, '(');
        } else if (expr[i] == ')') {
            while (!vaziaOp(&pilha) && topoOp(&pilha) != '(') {
                char op[2] = {desempilhaOp(&pilha), '\0'};
                enfileira(saida, op);
            }
            desempilhaOp(&pilha); // Tira o '('
        } else if (ehOperador(expr[i])) {
            while (!vaziaOp(&pilha) &&
                   precedencia(topoOp(&pilha)) >= precedencia(expr[i]) &&
                   topoOp(&pilha) != '(') {
                char op[2] = {desempilhaOp(&pilha), '\0'};
                enfileira(saida, op);
            }
            empilhaOp(&pilha, expr[i]);
        }
        i++;
    }

    while (!vaziaOp(&pilha)) {
        char op[2] = {desempilhaOp(&pilha), '\0'};
        enfileira(saida, op);
    }
}

// ---------------------- AVALIAÇÃO DA PÓS-FIXA ----------------------
float avaliaPosfixa(Fila *saida) {
    PilhaNum pilha;
    initPilhaNum(&pilha);

    while (!filaVazia(saida)) {
        char *token = desenfileira(saida);

        if (token[0] >= '0' && token[0] <= '9') {
            empilhaNum(&pilha, atof(token));
        } else if (ehOperador(token[0])) {
            float b = desempilhaNum(&pilha);
            float a = desempilhaNum(&pilha);
            float res = 0;

            switch (token[0]) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/':
                    if (b == 0) {
                        printf("Erro: divisao por zero!\n");
                        exit(1);
                    }
                    res = a / b;
                    break;
                case '^': res = potencia(a, b); break;
            }
            empilhaNum(&pilha, res);
        }
    }

    return desempilhaNum(&pilha);
}

// ---------------------- MAIN ----------------------
int main() {
    char expressao[200];
    char limpa[200];
    int j = 0;

    printf("Digite a expressao: ");
    fgets(expressao, 200, stdin);

    // Remover espaços
    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] != ' ' && expressao[i] != '\n')
            limpa[j++] = expressao[i];
    }
    limpa[j] = '\0';

    Fila saida;
    initFila(&saida);

    infixaParaPosfixa(limpa, &saida);

    // Mostrar expressão pós-fixa
    printf("\nExpressao pos-fixa: ");
    for (int i = saida.ini; i < saida.fim; i++) {
        printf("%s ", saida.itens[i]);
    }
    printf("\n");

    float resultado = avaliaPosfixa(&saida);
    printf("\nResultado final: %.2f\n", resultado);

    return 0;
}
