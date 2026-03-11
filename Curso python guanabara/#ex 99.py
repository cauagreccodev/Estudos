#ex 99

def maior():
    lista_num=[]
    cont=0
    qtd_num=int(input('Quantos números deseja digitar? '))
    maior=0
    while qtd_num:
        num=int(input('Digite um numero inteiro: '))
        lista_num.append(num)
        if cont == 0:
            maior = num
        else:
            if num > maior:
                maior = num
        cont+=1
        if cont>=qtd_num:
            break
    print(f'Os numeros digitados foram {lista_num}, foram digitados {cont} numeros e o maior numero entre eles é o {maior}')

maior()
    
