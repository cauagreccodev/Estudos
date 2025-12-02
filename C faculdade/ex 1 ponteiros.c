#include <stdio.h>

int main(){

    int n1;
    float r1;
    char c1;

    int *pn1;
    float *pr1;
    char *pc1;


    printf("valor int: ");
    scanf("%d",&n1);

    printf("valor float: ");
    scanf("%f",&r1);

    printf("valor char: ");
    scanf(" %c",&c1);
    
    printf("valores: %d %.2f %c\n",n1,r1,c1);
    
    pn1 = &n1;
    pr1 = &r1;
    pc1 = &c1;

    printf("valor int alterado: ");
    scanf("%d",pn1);

    printf("valor float alterado: ");
    scanf("%f",pr1);

    printf("valor char alterado: ");
    scanf(" %c",pc1);

    printf("valores alterados: %d %f %c\n",n1,r1,c1);

    return 0;
}