#ex 20
import random

al1=str(input('Aluno 1: '))
al2=str(input('Aluno 2: '))
al3=str(input('Aluno 3: '))
al4=str(input('Aluno 4: '))

lista_alunos=[al1,al2,al3,al4]

random.shuffle(lista_alunos)

print('a ordem de apresentação é {}'.format(lista_alunos))