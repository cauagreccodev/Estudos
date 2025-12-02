#ex 60
num=int(input('digite um valor para calcularmos o fatorial: '))
fact = num
f=1
while fact > 0:
    
    print ('{} x = {}'.format(fact,f),end='')
    print(' x 'if fact >1 else ' = ',end='')
    f= f*fact
    fact-=1
  
#fator de soma é 0 e multiplicacao 'limpa' é 1
