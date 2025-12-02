#include <stdio.h>

int arg(int val){
    if (val > 0){
        printf("P");
    }
    else{
        printf("N");
    }
    return val;
}

int main(){
    
    int num;
    
    printf("digite um valor: ");
    scanf("%d",&num);

    arg(num);
    return 0;
}