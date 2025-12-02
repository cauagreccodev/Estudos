#include <stdio.h>
int main(){
	
	float pop_a,pop_b;
	char resp = 's';
	int cont;
	
	while(resp == 's' || resp=='S'){
	
	printf("Cidade a: ");
	scanf("%f",&pop_a);
	
	printf("Cidade b: ");
	scanf("%f",&pop_b);
		
		cont=0;
		
		while(1){
			pop_a+=(pop_a*0.03);
			pop_b+=(pop_b*0.015);
			cont+=1;
			
			
			if (pop_a>pop_b) {
			break;
			}
		}
		printf("sera necessario %d anos para a cidade A passar a cidade B\n",cont);
		
		printf("Deseja realizar outro calculo? S/N\n");
		scanf(" %c", &resp);
		
	}
	printf("PROGRAMA ENCERRADO!!!");
	
	return 0;	
}

