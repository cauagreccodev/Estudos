#ex 79

num=[]
while True:
    n=int(input('digite um valor: '))
    if n not in num:
        num.append(n)
        print('o numero foi adicionado!!!')
    else:
        print('o numero nao foi adicionado pois ja existe na lista!')    
    
    cont=str(input('deseja continuar? S/N: ')).upper()
    if cont == 'N':
        break

print(f'os numeros adicionados foram {num}')
print('Programa encerrado!')