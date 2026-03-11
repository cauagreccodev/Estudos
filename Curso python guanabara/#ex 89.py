#ex 89

bol=[]
while True:
    nome=str(input('Digite seu nome: '))
    nota1=float(input('Digite sua nota 1: '))
    nota2=float(input('Digite sua nota 2: '))
    media=nota1+nota2 /2
    bol.append([nome,[nota1,nota2],media])

    conti=str(input('Deseja continuar S/N: ')).upper()
    if conti=='N':
        break

for p, i in enumerate(bol):
    print(f'{p} {i[0]} {i[2]}')