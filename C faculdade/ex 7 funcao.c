#include <stdio.h>

double valorPagamento(double val,int dias){
    
    double juros;

    juros=val+((0.001*val)*dias)+(0.03*val);

    return juros;
}

int main(){
    double prest;
    int dias_atraso;

    printf("Valor da prestacao: ");
    scanf("%lf",&prest);

    printf("Dias de atraso: ");
    scanf("%d",&dias_atraso);

    printf("No valor de %.2fR$, com %d dias de atraso, resultou em %.2fR$ com juros",prest,dias_atraso,valorPagamento(prest,dias_atraso));

    return 0;

}