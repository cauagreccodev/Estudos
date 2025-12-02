#include <stdio.h>
int main(){
	
	int nota;
	
	
	while (1){
		printf("Digite um valor: ");
		scanf("%d",&nota);
		
		if(nota>=0 && nota <=10){ 
		break;
		}
		else{
			printf("Valor invalido\n");
		}
			
	}
	printf("voce digitou o valor %d",nota);
	return 0;
}
