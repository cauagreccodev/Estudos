#ex 86 e 87

lista_num=[]
cont=0
spar = maior = scol = 0
for c in range(0,9):
    lista_num.append(int(input('digite um numero inteiro para a matriz: ')))
    if lista_num[c]%2==0:
        spar+=lista_num[c]

print(f'''
[{lista_num[0]}] [{lista_num[1]}] [{lista_num[2]}]
[{lista_num[3]}] [{lista_num[4]}] [{lista_num[5]}]
[{lista_num[6]}] [{lista_num[7]}] [{lista_num[8]}]''')

for n in lista_num:
    if n%2==0:
        cont=n

print(f'A soma dos pares é {spar}')
print(f'A soma da terceira coluna é {lista_num[6]+lista_num[7]+lista_num[8]}')
for m in range(3,6):
    if m == 0:
        maior=lista_num[m]
    elif lista_num[m] > maior:
        maior=lista_num[m]
print(f'o maior da segunda linha é {maior}')
