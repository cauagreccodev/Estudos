#include <stdio.h>
int main(){
	
	int num;
	
	printf("digite um valor: ");
	scanf("%d",&num);
	
	printf(" Os divisores sao %d\n",num);
	
	for (int i=1; i<=num; i++){
		if (num % i == 0){
			printf("%d ",i);
		}
	}
	printf("programa encerrado!!!");
	return 0;
}


