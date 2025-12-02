#include <stdio.h>

struct aluno {
    int matricula;
    char nome[50];
    float n1, n2, n3;
    float media;
};

int main() {
    int i;

    struct aluno al[5];

    float maior_n1;

    for (i = 0; i < 5; i++) {
        printf("Aluno: %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &al[i].matricula);

        printf("Nome: ");
        scanf("%s", al[i].nome);

        printf("n1: ");
        scanf("%f", &al[i].n1);

        printf("n2: ");
        scanf("%f", &al[i].n2);

        printf("n3: ");
        scanf("%f", &al[i].n3);

        al[i].media = (al[i].n1 + al[i].n2 + al[i].n3) / 3;
    }
	
	
	float maior_med = al[0].media;
	float menor_med = al[0].media;
    
	for (i = 0; i < 5; i++) {
        if (al[i].n1 > maior_n1)
            maior_n1 = al[i].n1;

        if (al[i].media > maior_med)
            maior_med = al[i].media;

        if (al[i].media < menor_med)
            menor_med = al[i].media;
    }

    printf("A maior nota foi %.2f\n", maior_n1);
    
    printf("A maior media foi %.2f\n", maior_med);
    
    printf("A menor media foi %.2f\n", menor_med);

    return 0;
}
