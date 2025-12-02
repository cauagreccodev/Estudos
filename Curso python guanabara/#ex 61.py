#ex 61 e 62

primeiro_termo=int(input('digite o primeiro termo: '))
raz=int(input('digite a razao dele: '))
prog=primeiro_termo
cont=1
total=0
opc=10
while opc!=0:
    total=total+opc
    while cont <= total:
        print('{}'.format(prog),end=' ')
        prog+=raz
        cont+=1
    opc=int(input('mais quantos fatoriais voce quer prosseguir: '))
