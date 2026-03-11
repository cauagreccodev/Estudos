#include <stdio.h>

void impressao(int v){

    int i,j;

    for(i=1; i <= v; i++){
        for(j=1; j <=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

}

int main(){
    int n;

    printf("deseja digitar qual numero?");
    scanf("%d",&n);

    impressao(n);
    return 0;
}