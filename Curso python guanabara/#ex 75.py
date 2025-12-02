#ex75
valor_1=int(input(f'Digite um número: '))
valor_2=int(input(f'Digite um número: '))
valor_3=int(input(f'Digite um número: '))
valor_4=int(input(f'Digite um número: '))

num=(valor_1,valor_2,valor_3,valor_4)

numero_nove=9

contagem_num=num.count(numero_nove)
print(f'voce digitou os valores {num}')
print('-'*20)
print(f'o numero {numero_nove} apareceu {contagem_num} vezes')
print('-'*20)
if num==3:
    print(f'o numero 3 apareceu na {num.index(3)+1} posicao')
else:
    print(f'o numero 3 nao apareceu')
print('-'*20)

print(f'Os valores pares digitados foram',end=' ')
for n in num:
    if n%2 ==0:
        print(n,end=' ')
