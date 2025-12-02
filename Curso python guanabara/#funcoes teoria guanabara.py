#FUNCOES TEORIA GUANABARA

def mens(msg):
    print('-'*30)
    print(msg)
    print('-'*30)

#uso das funcoes
#mens('penis')

#PARTE PRATICA
def soma(a,b):
    print(f'A = {a} e B = {b}')
    r=a+b
    print(f'a soma A + B = {r}')
    print('-'*30)
    
#exemplo de uso
#soma(1,2)
#soma(1,5)

#SISTEMA DE EMPACOTAMENTO
def contador(*num):
    tam=len(num)
    print(f'recebi os valores {num} e sao ao todo {tam} números')
    print('-'*30)

#contador(689,69,629)
#contador(157,100,20)

def somao(*valores):
    s=0
    for num in valores:
        s +=num
    print(f'somando os valores {valores} temos {s}')

somao(2,5,5,6)
somao(8,9,1,78,1)
somao(9,2,4,2,4,8,0)

#USO COM LISTAS

def dobra(lst):
    pos=0
    while pos < len(lst):
        lst[pos] *=2
        pos+=1


#valores=[7,5,6,8,9,0]
#dobra(valores)
#print(valores)

#EM ALGUMAS SITUACOES É MELHOR EMPACOTAMENTO E EM OUTRAS A LISTA