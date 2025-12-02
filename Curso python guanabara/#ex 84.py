#ex 84

pessoas=[]
princ=[]
mai = men = 0
peso=0
cont=0
while True:
    pessoas.append(str(input('Digite o nome das pessoas: ')))
    pessoas.append(int(input('Digite o peso das pessoas: ')))
    if len(princ)==0:
        mai=men=pessoas[1]
    else:
        if pessoas[1] > mai:
            mai=pessoas[1]
        if pessoas[1] < men:
            men=pessoas[1]
    princ.append(pessoas[:])
    pessoas.clear()
    cont+=1
    conti=str(input('deseja continuar S/N: ')).upper()
    if conti=='N':
        break
print(f'Os dados foram {princ}')
print(f'Voce cadastrou {cont} pessoas')
print(f'O maior peso foi de {mai}, peso de ',end='')
for p in princ:
    if p[1] == mai:
        print(f'{p[0]} ',end='')
print()
print(f'O menor peso foi de {men}, peso de ',end='')
for p in princ:
    if p[1] == men:
        print(f'{p[0]} ',end='')


