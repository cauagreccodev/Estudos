#ex 19

import random

aluno1=str(input('aluno 1: '))
aluno2=str(input('aluno 2: '))
aluno3=str(input('aluno 3: '))
aluno4=str(input('aluno 4: '))
lista_alunos=[aluno1,aluno2,aluno3,aluno4]

print('o aluno escolhido foi {}'.format(random.choice(lista_alunos)))