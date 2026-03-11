#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *vetor;
    int par=0,impar=0;

    printf("determine o tamanho do vetor: ");
    scanf("%d",&n);

    vetor=(int*)malloc(n*sizeof(int));

    if (vetor==NULL)
    {
        printf("alocacao falhou!!!");
        return 1;
    }
    

    for(int i=0;i<n;i++){
        printf("digite os valores de n%d: ",i+1);
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<n;i++){
        printf("Valor de n%d: %d\n",i+1,vetor[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (vetor[i]%2==0)
        {
            par+=1;
        }
        else
        {
            impar+=1;
        }
        
    }

    printf("a quantidade de numeros pares e %d, e a de numeros impares e %d",par,impar);
    
    return 0;
    free(vetor);
}