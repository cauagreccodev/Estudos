#ex 100
import random
lista_num=[]

def sorteia(lst):
    lst=[]
    for c in range(0,5):
        lst.append(random.randint(0,100))
    print(lst)
    return lst
def soma_par(lst):
    soma=0
    for num in lst:
        if num%2 == 0:
            soma+=num
    print(f'a soma entre os numeros da lista {lst} dá {soma}')


soma_par(sorteia(lista_num))
    