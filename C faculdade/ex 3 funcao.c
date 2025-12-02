#include <stdio.h>

int soma(int a, int b, int c){
    int resultado = a + b + c;
    return resultado;
}

int main(){
    
    int num1, num2, num3;
    int resultado_final;

    printf("num1: ");
    scanf("%d",&num1);

    printf("num2: ");
    scanf("%d",&num2);

    printf("num3: ");
    scanf("%d",&num3);

    resultado_final = soma(num1,num2,num3);

    printf("%d + %d + %d = %d",num1,num2,num3,resultado_final);
    return 0;
}