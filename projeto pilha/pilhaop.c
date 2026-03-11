#include <stdio.h>
#include <stdlib.h>
#include "pilhaop.h"

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
