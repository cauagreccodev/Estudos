#include <stdio.h>
#include <string.h>
int main(){
	
	char usuario[50];
	char senha[50];
	
	while(1){
		printf("digite seu nome de usuario: ");
		scanf("%s",&usuario);
		
		printf("digite sua senha: ");
		scanf("%s",&senha);
		
		if (strcmp(usuario,senha)!=0){
		break;
		}
		else{
			printf("a senha ta igual o nome!\n");
		}
	}
	printf("USUARIO CADASTRADO");
	
	return 0;
}

