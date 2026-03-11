#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *vetor;

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

    return 0;
    free(vetor);
}