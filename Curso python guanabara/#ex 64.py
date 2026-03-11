#ex 64
s=0
n=0
qtd_num=0
while n !=999:
    n=int(input('digite um numero: '))
    if n!=999:
        s+=n
        qtd_num+=(n/n)
    
print('voce digitou {} numeros, e a soma entre eles deu {}'.format(qtd_num,s))