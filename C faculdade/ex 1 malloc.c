#include <stdio.h>
#include <stdlib.h>

int main(){
    int *n;

    n=(int*)malloc(5*sizeof(int));

    if(n==NULL){
        printf("falha na alocacao de memoria!!!");
        return 1;
    }

    for (int i = 0;i<5;i++){
        printf("digite n%d:",i+1);
        scanf("%d",&n[i]);
    }
    
    for(int i = 0; i<5;i++){
    printf("conteudo de n%d: %d\n",i+1,n[i]);
    }
    
    printf("\n");
    
    free(n);
    return 0;

}