#include <stdio.h>

int imprimir(int i){
if (i>1){
imprimir(i/2);
imprimir(i/2);
}
printf("*");
}

int main(){
    imprimir(5);
}
