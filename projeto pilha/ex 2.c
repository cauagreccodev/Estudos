#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int testapilha(int *v,int n){

    if(v == NULL || n<=0){
        return 0;
    }

    Pilha *p;

    if(p == NULL){
        return 0;
    }


    int valor_removido;

    int valor_esperado;


    p = criarPilha(n);

    for (int i=0;i<n;i++){

        push(p,v[i]);
    }

    for (int i=0;i<n;i++){

        valor_removido = pop(p);

        valor_esperado = v[n - 1 - i];

        if (valor_removido != valor_esperado){
            liberarMemoriaPilha(p);
            return 0; //implementacao falhou
        }
    }
    liberarMemoriaPilha(p);
    return 1; //implementacao deu certo
}

int main() {
    int meu_vetor[] = {5, 1, 2, 3};
    int n = 4;

    // 1. Crie uma variável para guardar o resultado
    int resultado;

    // 2. Armazene o retorno da função "testapilha" na sua variável
    resultado = testapilha(meu_vetor, n);

    // 3. Imprima o valor da variável no console
    printf("Resultado do teste: %d\n", resultado);

    // Você também pode fazer um 'if' para ficar mais claro:
    if (resultado == 1) {
        printf("A pilha funciona corretamente!\n");
    } else {
        printf("A pilha FALHOU no teste.\n");
    }

    return 0; // Boa prática
}
