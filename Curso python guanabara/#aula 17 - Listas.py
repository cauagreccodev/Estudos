#aula 17 - Listas
num=[2,5,9,1]
num[2]=3
num.append(7)
num.sort(reverse=True)
num.insert(2,2)
if 5 in num:
    num.remove(5)
else:
    print('Numero 4 nao foi encontrado...')
#print(num)

valores=[]
#ou valores=list()
#valores.append(5)
#valores.append(3)
#valores.append(4)
#for cont in range(0,5):
#    valores.append(int(input('digite 5 numeros: ')))

#for c, v in enumerate (valores):
#    print(f'Na posicao {c}, encontrei o {v}...')
#print('Cheguei ao final da lista.')

a=[2,3,4,7]
#b=a
#para fazer uma copia:
b=a[:]
#A PARTIR DO MOMENTO QUE VOCE IGUALA UMA LISTA NA OUTRA, O PYTHON CRIA UMA LIGACAO ENTRE ELAS
b[2] = 8
print(f'Lista a: {a}')
print(f'Lista b: {b}')