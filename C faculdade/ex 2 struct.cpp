#include <stdio.h>

struct livro{
	
	char titulo[30];
	char autor[30];
	int ano_publicado;
};

int main(){
	
	struct livro l;
	
	printf("titulo: ");
	scanf("%s",l.titulo);
	
	printf("autor: ");
	scanf("%s",l.autor);
	
	printf("ano publicado: ");
	scanf("%d",&l.ano_publicado);
	
	printf("titulo: %s\n",l.titulo);
	
	printf("autor: %s\n",l.autor);
	
	printf("ano publicado: %d\n",l.ano_publicado);
}
	
	
