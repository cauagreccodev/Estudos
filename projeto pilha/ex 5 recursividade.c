#include <stdio.h>

void cubos(int n){
    if(n==0)
        return;
    cubos(n-1);
    printf("%d\n",n*n*n);
}

int main(){
    cubos(3);
}
