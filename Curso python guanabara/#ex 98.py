#ex 98
from time import sleep
personalizado=[]

def contagem():
    for c in range(1,11):
        print(c,end=' ')
        sleep(0.5)
    print()
    for c in range(10,-2,-2):
        print(c,end=' ')
        sleep(0.5)
    print()
    inicio=int(input('Digite seu inicio: '))
    fim=int(input('Digite seu fim: '))
    passo=int(input('Digite seu passo: '))
    for c in range(inicio,fim+1,passo):
        print(c,end=' ')
        sleep(0.5)
        

contagem()