#include <stdio.h>

int conversao(hora){
    int not;

    not = hora-12;
    return not;
}

void saida(hora){
    
    if (hora>=12){
        printf("P.M");
    }else{
        printf("A.M");
    }
}

int main(){
    int hora,min;

    printf("Hora: ");
    scanf("%d",&hora);

    printf("Minuto: ");
    scanf("%d",&min);

    if (hora>=12){
        printf("Horario: %d:%d ",conversao(hora),min);
        saida(hora);
    }
    else{
        printf("Horario: %d %d ",hora,min);
        saida(hora);
    }
    return 0;
}
