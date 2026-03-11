#ex 90
aluno={}

aluno['nome'] = str(input('digite seu nome: '))
aluno['media'] = float(input('digite sua media: '))

print(f'O nome do aluno é {aluno["nome"]}')
print(f'A media do aluno é {aluno["media"]}')

if aluno['media'] <6:
    print('Reprovado')
else:
    print('Aprovado')

