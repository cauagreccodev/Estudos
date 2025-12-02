#include <stdio.h>

float somaImposto(float custo,float porcentagem){
    float valorImposto = custo * (porcentagem/100);
    return valorImposto;
}

int main(){
    
    float valor_final,preco,porc;
    
    printf("preco: ");
    scanf("%f",&preco);

    printf("porcentagem: ");
    scanf("%f",&porc);

    valor_final = preco + somaImposto(preco, porc);

    printf("o produto de preco, %.2fR$, foi taxado em %.2f e saiu %.2fR$",preco,porc,valor_final);

}
