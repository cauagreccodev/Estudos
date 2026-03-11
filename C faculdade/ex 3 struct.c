#include <stdio.h>

struct produto{
	
	int codigo;
	char nome[40];
	float preco;
};

int main(){
	
	struct produto prod;
	
	printf("codigo: ");
	scanf("%d",&prod.codigo);
	
	printf("nome: ");
	scanf("%s",prod.nome);
	
	printf("preco: ");
	scanf("%f",&prod.preco);
	
	printf("Codigo: %d\n",prod.codigo);
	
	printf("nome: %s\n",prod.nome);
	
	printf("preco: %.2f\n",prod.preco);
	
	return 0;

}
