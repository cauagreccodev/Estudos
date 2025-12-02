#include <stdio.h>

struct registro {
	char nome[50];
	int matricula;
	float media;
};

int main(){
	
	struct registro reg;
	
	printf("nome: ");
	scanf("%s",reg.nome);
	
	printf("matricula: ");
	scanf("%d",&reg.matricula);
	
	printf("Media: ");
	scanf("%f",&reg.media);

	printf("nome: %s\n",reg.nome);
	
	printf("matricula: %d\n",reg.matricula);
	
	printf("media: %.2f\n",reg.media);	
	
	return 0;
}
