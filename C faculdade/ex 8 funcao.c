#include <stdio.h>

void qtd_digitos(int valor){
    
    int valor_orig=valor;
    int cont=0;
    
    if(valor==0){
        cont=1;
    }else{
        
        while(valor!=0){
            valor=valor/10;
            cont+=1;
        }
    }
    printf("O numero %d, tem %d digitos",valor_orig,cont);
}

int main(){
    int n;
    
    printf("Digite n: ");
    scanf("%d",&n);

    qtd_digitos(n);
    
    return 0;
}