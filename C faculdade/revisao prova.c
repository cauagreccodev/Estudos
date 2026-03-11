typedef struct {
    int id; // identificador único do aluno
    char nome[50]; // nome do aluno
    int idade; // idade do aluno
} Aluno;
typedef struct {
    int id; // identificador único do professor
    char nome[50]; // nome do professor
} Professor;
typedef struct {
    int idAluno; // id do aluno
    float nota1; // primeira nota
    float nota2; // segunda nota
    float nota3; // terceira nota
} Nota;
typedef struct {
    int id; // identificador único da turma
    int idProfessor; // id do professor responsável (não é struct)
    char disciplina[50]; // nome da disciplina da turma
    int alunosTurma[50]; // vetor com os IDs dos alunos
    int qtdAlunos; // quantidade de alunos na turma
Nota notas[50]; // vetor de notas (ligadas aos alunos)
    int qtdNotas; // quantidade de registros de notas
} Turma;


// NIVEL BASICO

void al(int id, char *n, int i){
    
    printf("id: %d\n",id);

    printf("nome: %s\n",n);

    printf("idade: %d\n",i);
}

int buscarprof(Professor listaprof[], int totalprofs, int idbusca){

    for (int i=0;i<totalprofs;i++){
        
        if(listaprof[i].id == idbusca){
        
        return i;
        }
    return -1;
    }
}

int buscaal(Turma listaal[],int totalal,int idbusca,int qtdnotas){

    for(int i=0;i<totalal;i++){
        if(listaal[i].alunosTurma == idbusca){
            for(int j=0;j<qtdnotas;j++){
            
            printf("nota 1: %d",listaal[i].notas[j].nota1);
            printf("nota 2: %d",listaal[i].notas[j].nota2);
            printf("nota 3: %d",listaal[i].notas[j].nota3);
        }
    }
    return -1;
    }
}

//NIVEL INTERMEDIARIO

int calcMedia(Nota listanota[],int totnotas, int idbusca){
    for(int i=0; i<totnotas;i++){
        if(listanota[i].idAluno == idbusca){
            
            float media = (listanota[i].nota1 + listanota[i].nota2 + listanota[i].nota3)/3;
            
            return media;
        }
    }
    return -1;
}

int medGeral(Turma med){
    float somaTot = 0;
    int contal = 0;
    
    if (med.qtdAlunos == 0){
        return 0;
    }

    for(int i=0;i<med.qtdAlunos;i++){

        int IdAlunoAtual = med.alunosTurma[i];

        for(int j=0;j<med.qtdNotas;j++){

        float mediaInd=(med.notas[j].nota1 + med.notas[j].nota2 + med.notas[j].nota3);

        contal+=1;
        }    
    }
    if (contal=0){
        return 0;
    }
    return somaTot/contal;
}


float MaiorMed(Turma turma){

    float maior = 0;    

    if (turma.qtdAlunos == 0){
        return 0;
    }

    for(int i=0; i<turma.qtdAlunos; i++){

        int IdAlunoAtual = turma.alunosTurma[i];

            for(int j=0;j<turma.qtdNotas;j++){
            
                if(turma.notas[j].idAluno == IdAlunoAtual){
            
                float mediaInd=(turma.notas[j].nota1 + turma.notas[j].nota2 + turma.notas[j].nota3) /3;

            if(mediaInd > maior){
                maior = mediaInd;
                }
            }
        }
    }
    return maior;
}

float MaiorMed(Turma turma){

    float menor = 0;    

    if (turma.qtdAlunos == 0){
        return 0;
    }

    for(int i=0; i<turma.qtdAlunos; i++){

        int IdAlunoAtual = turma.alunosTurma[i];

            for(int j=0;j<turma.qtdNotas;j++){
            
                if(turma.notas[j].idAluno == IdAlunoAtual){
            
                float mediaInd=(turma.notas[j].nota1 + turma.notas[j].nota2 + turma.notas[j].nota3) /3;

            if(mediaInd < menor){
                menor = mediaInd;
                }
            }
        }
    }
    return menor;
}

float Aprovados(Turma turma, Nota todasnotas[],int totalGeralNotas){

    int aprovados = 0;

    if(turma.qtdAlunos ==0){
        return 0;
    }

    for(int i=0; i<turma.qtdAlunos;i++){
        
        int idAlunoAtual = turma.alunosTurma[i];
            
            float mediaInd = calcMedia(todasnotas,totalGeralNotas,idAlunoAtual);
                
                if (mediaInd >=7){
                    aprovados+=1;
                    }
     }
    return aprovados;
}

float Reprovados(Turma turma, Nota todasnotas[],int totalGeralNotas){

    int reprovados = 0;

    if(turma.qtdAlunos ==0){
        return 0;
    }

    for(int i=0; i<turma.qtdAlunos;i++){
        
        int idAlunoAtual = turma.alunosTurma[i];
            
            float mediaInd = calcMedia(todasnotas,totalGeralNotas,idAlunoAtual);
                
                if (mediaInd <5){
                    reprovados+=1;
                    }
     }
    return reprovados;
}

void Menos_18_sem_0(Nota todasnotas[],Aluno alunos[], int totalGeralAlunos,int totalNotas){

    
    for (int i=0; i<totalGeralAlunos;i++){
        
        if(alunos[i].idade < 18);
            
        for (int j = 0; i<totalNotas;j++){

            if (todasnotas[j].idAluno == alunos[j].id){

                if (todasnotas[j].nota1 !=0 || todasnotas[j].nota2 !=0 || todasnotas[j].nota3){
                    
                   printf("id: %d nome: %s, idade: %d\n",alunos[j].id,alunos[j].nome,alunos[j].idade);
                }      
    }
}
}
}


int main() {
Turma turmas[100];
Aluno alunos[10000];
Professor professor[500];
int qtdTurmas, qtdAlunos, qtdProfessores, i;
//restante do código da main()

//ex 1

printf("id aluno: ");
scanf("%d",&alunos->id);

printf("nome: ");
scanf("%s",alunos->nome);

printf("idade: ");
scanf("%d",&alunos->idade);

for (i=0;i<=qtdAlunos;i++);
    
    al(alunos[i].id,alunos[i].nome,alunos[i].idade);

return 0;
}

