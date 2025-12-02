#include <stdio.h>

struct clientes{
	
	int codigo;
	char nome[30];                                                         
};

int main(){
	
	int i;
	
	struct clientes cli[5];
	
	for(i=0; i<5; i++){
		
		printf("Cliente %d\n", i + 1);
		
		printf("codigo: ");
		scanf("%d",&cli[i].codigo);
		
		printf("nome: ");
		scanf(" %s",cli[i].nome);
	}
	
	
	for(i=0;i < 5; i++){
		printf("cliente %d:\n",i+1);
		printf("codigo: %d\n",cli[i].codigo);
		printf("nome: %s\n",cli[i].nome);
	}
}
