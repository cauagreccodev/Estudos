#aula 20 - Funcoes parte 1

#def lin():
#    print('='*30)

#lin()

#def mensagem(msg):
#   print('-'*30)
#    print(msg)
#    print('-'*30)

#mensagem('      Sistema de alunos   ')
#mensagem('          PENIS')


#def soma(sum1,sum2):
#    res=sum1+sum2
#    print(res)

#soma(4,2)
#soma(sum2=2,sum1=3)

#EMPACOTAMENTO

def contador(*num):
    for valor in num:
        print(f'{valor} ',end=' ')
    print('FIM!')
    
    tam=len(num)
    print(f'Recebi os valores {num} e ao todo sao {tam} numeros')

contador(1,2,3,4,5)
contador(0,1,2,3)

#TRABALHANDO COM AS LISTAS

def dobra(lst):
    pos=0
    while pos < len(lst):
        lst[pos]*=2
        pos+=1


valores = [5,2,3,4,8]
dobra(valores)
print(valores)

#voltando

def soma(*valores):
    s=0
    for num in valores:
        s+=num
    print(f'Somando os valores {valores} temos {s}')

soma(5,2)
soma(1,2,3)