#include <stdio.h>

int main()
{
    int dia_sem, hora, min;
    char estudante, forma_pag;
    float preco, desc_30, desc;

    printf("Que dia e Hoje? ");
    scanf("%d", &dia_sem);

    printf("Qual o horario? ");
    scanf("%d %d", &hora, &min);

    printf("Qual sua forma de pagamento? Digite D para dinheiro e C para cartao de credito: ");
    scanf(" %c", &forma_pag);

    printf("Voce e estudante? S/N: ");
    scanf(" %c", &estudante);

    if ((dia_sem == 1 ||dia_sem == 2|| dia_sem ==3) && hora < 18) {
        preco = 15;
    }
    else if ((dia_sem == 4 || dia_sem == 5) && hora < 18) {
        preco = 20;
    }
    else if ((dia_sem == 6 || dia_sem == 7) && hora < 18) {
        preco = 30;
    }
    // dias da semana vespertino
    
    else if ((dia_sem == 1 || dia_sem == 2) && hora >= 18) {
        preco = 20;
    }
    else if ((dia_sem == 3 || dia_sem == 4) || dia_sem==7 && hora >= 18){
        preco = 30;
    }
    else if ((dia_sem == 5 || dia_sem == 6) && hora >= 18) {
        preco = 40;
    }
    
	
		// Segunda a quinta no cartão (50% desconto)
	if ((forma_pag=='C' || forma_pag=='c') && (dia_sem >= 1 && dia_sem <= 4)){
	    preco = preco / 2;
	}
	
	// Domingo ou sexta à noite no cartão (30% desconto)
	else if ((forma_pag=='C' || forma_pag=='c') && (dia_sem == 7 || (dia_sem == 5 && hora >= 18))){
	    preco = preco - (preco * 0.30);
	}
	
	// Sábado no cartão (20% desconto)
	else if ((forma_pag=='C' || forma_pag=='c') && dia_sem == 6){
	    preco = preco - (preco * 0.20);
	}

	printf("O preco do ingresso ficou %.2fR$",preco);
	
	return 0;
}
    

