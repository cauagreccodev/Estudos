#aula 21 - Funcoes parte 2

#interactive help
#"help(print)"
#print(input.__doc__)

#DOCSTRINGS

def contador(i,f,k):
    """
    --> faz uma contagem e mostra na tela
    i: inicio da contagem
    f: final da contagem
    k: passo da contagem
    Funcao criada por Caua Grecco
    """
    c=i
    while c<f:
        print(f'{c}',end=' ')
        c+=k
    print('fim')

"contador(0,11,2)"
help(contador)

#PARAMETROS OPCIONAIS

def somar(a=0,b=0,c=0):
    s=a+b+c
    print(f'a soma vale {s}')

somar(3,2,5)

somar(8,4)
#VAI DAR ERRO AO MENOS QUE C=0, ou seja C=0 é um parametro opcional

#ESCOPO DE VARIAVEIS, LOCAL ONDE A VARIAVEL VAI EXISTIR E ONDE NAO VAI EXISTIR

def teste():
    x=8
    print(f'Na funcao teste, n vale {n}')

#n VARIAVEL GLOBAL
#x Variavel local
#Programa principal

n=2
print(f'No programa principal, n vale {n}')
teste=()

"print(f'No programa principal,x vale {x}')"
#vai dar erro

def funcao():
    n1=4
    print(f'n1 dentro vale {n1}')
n1=2
funcao()
print(f'n1 fora vale {n1}')

def teste(b):
    global a
    a=8
    b+=4
    c=2
    print(f'A dentro vale {a}')
    print(f'B dentro vale {b}')
    print(f'C dentro vale {c}')
a=5
teste(a)
print(f'A fora vale {a}')

#RETORNANDO VALORES

def somar(a=0,b=0,c=0):
    s=a+b+c
    return s

r1=somar(3,2,5)
r2=somar(2,2)
r3=somar(6)

print(f'Meus calculos deram {r1}, {r2} e {r3}')

#pratica
def fatorial(num= 1):
    f = 1
    for c in range(num, 0, -1):
        f*=c
    return f


f1=fatorial(5)
f2=fatorial(4)
f3=fatorial()
print(f'Os resultados sao {f1}, {f2} e {f3}')
#n=int(input('Digite um numero: '))
#print(f'O fatorial de {n} é igual a {fatorial(n)}')

def par(n=0):
    if n % 2==0:
        return True
    else:
        return False
    
num=int(input('Digite um numero: '))
#print(par(num))
if par(num):
    print('É par!')
else:
    print('Nao é par!')