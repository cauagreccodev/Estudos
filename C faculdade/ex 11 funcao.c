#include <stdio.h>

void mesPorExtenso(char data[10]){

    char mes_1 = data[3];
    char mes_2 = data[4];

    if (mes_1=='0' && mes_2=='1'){
        printf(" de Janeiro de");
    }else
    if (mes_1=='0' && mes_2=='2'){
        printf(" de Fevereiro de");
    }else
    if (mes_1=='0' && mes_2=='3'){
        printf(" de Março de ");
    }else
    if (mes_1=='0' && mes_2=='4'){
        printf(" de Abril de ");
    }else
    if (mes_1=='0' && mes_2=='5'){
        printf(" de Maio de ");
    }else
    if (mes_1=='0' && mes_2=='6'){
        printf(" de Junho de ");
    }else
    if (mes_1=='0' && mes_2=='7'){
        printf(" de Julho de ");
    }else
    if (mes_1=='0' && mes_2=='8'){
        printf(" de Agosto de ");
    }else
    if (mes_1=='0' && mes_2=='9'){
        printf(" de Setembro de ");
    }else
    if (mes_1=='1' && mes_2=='0'){
        printf(" de Outubro de ");
    }else
    if (mes_1=='1' && mes_2=='1'){
        printf(" de Novembro de ");
    }else
    if (mes_1=='1' && mes_2=='2'){
        printf(" de Dezembro de ");
    }
}

int main(){
    char data_completa[10];

    printf("data: ");
    scanf("%s",data_completa);

    printf("%c%c",data_completa[0],data_completa[1]);
    mesPorExtenso(data_completa);
    printf("%c%c%c%c\n",data_completa[6],data_completa[7],data_completa[8],data_completa[9]);
    return 0;
}

