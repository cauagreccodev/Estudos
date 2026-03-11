#ex 81
num=[]
num.sort

while True:
    n=int(input('digite um valor: '))
    if n not in num:
        num.append(n)
        print('numero adicionado')
    else:
        print('numero nao adicionado')
    
    cont=str(input('Deseja continuar? S/N ')).upper()
    if cont=='N':
        break

print(f'os numeros digitados em ordem foram {num}')
print(f'foram digitados {len(num)} numeros')

num.sort(reverse=True)
print(f'a ordem reversa fica {num}')

if 5 in num:
    print('o numero 5 foi digitado e adicionado na lista')
else:
    print('o numero 5 nao foi digitado')