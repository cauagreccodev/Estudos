#ex 85

lista_num=[]
par=[]
impar=[]
lista_num.sort()
for c in range(0,7):
    num=int(input('digite um numero: '))
    if num%2==0:
        par.append(num)        
    else:
        impar.append(num)
print(f'Os numeros pares digitados foram {par}')
print(f'Os numeros impares digitados foram {impar}')

