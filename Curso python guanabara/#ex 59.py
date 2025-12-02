#ex 59

n1=int(input('digite um numero: '))
n2=int(input('digite outro numero: '))
opc=0
maior=0

while opc !=5:
    opc=int(input('''Qual a sua opcao?
                [1] Somar
                [2] Multiplicar
                [3] Maior
                [4] Novos números
                [5] Sair do programa
                '''))
    if opc==1:
        print('a soma deles deu {}'.format(n1+n2))     
    elif opc==2:
        print('a multiplicacao entre eles deu {}'.format(n1*n2))        
    elif opc==3:
        if n1 > n2:
            maior = n1
        else:
            maior = n2

        print('O maior número é {}'.format(maior))
 
    elif opc==4:
        n1=int(input('Digite um novo numero: '))
        n2=int(input('Digite outro novo número: '))

    elif opc > 5:
        print('opcao invalida, tente novamente!!!!')

if opc==5:
    print('FIM DO PROGRAMA!!!!')


