#include <stdio.h>
#include <stdlib.h>
#include "pilhanum.h"

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
