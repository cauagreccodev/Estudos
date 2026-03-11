#include <stdio.h>

struct media{
	
	char nome[30];
	float nota;
};

int main(){
	
	int i;
	
	struct media med[3];

	for(i=0; i<3; i++);{
	
		printf("Aluno %d\n", i+1);
		
		printf("nome: ");
		scanf("%s",&med[i].nome);
		
		printf("nota: ");
		scanf("%d",&med[i].nota);
	}
	
	for(i=0; i<3; i++);{
		printf("aluno %d",i+1);
		printf("nome: %s",med[i].nome);
		printf("nota: %d",med[i].nota);
	}
}
