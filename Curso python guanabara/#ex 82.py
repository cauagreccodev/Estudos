#ex 82
num=[]
num_par=[]
num_impar=[]
num.sort()

while True:
    n=int(input('digite um valor: '))
    if n not in num:
        num.append(n)
        print('o numero foi adicionado')
    if n not in num and n%2==0:
        num_par.append(n)
    if n not in num and n%2!=0:
        num_impar.append(n)
    else:
        print('O numero nao foi adicionado')

    cont=str(input('deseja continuar? S/N ')).upper()
    if cont == 'N':
        break

print(f'Os numeros adicionados foram {num}')
print(f'Os numeros pares adicionados foram {num_par}')
print(f'Os numeros impares adicionados foram {num_impar}')