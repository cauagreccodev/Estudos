#include <stdio.h>

int reverso(int n){
    int num_reverso=0;

    while(n!=0){
        int ultimo_dig = n %10;

        num_reverso=(num_reverso*10) + ultimo_dig;

        n= n/10;
    }
    return num_reverso;
}

int main(){
    int valor;

    printf("valor: ");
    scanf("%d",&valor);

    printf("%d reverso fica %d",valor,reverso(valor));

    return 0;
}