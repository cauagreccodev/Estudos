#ex 38

n1=int(input('digite um número inteiro: '))
n2=int(input('digite outro número inteiro: '))

if n1>n2:
    print('{} é maior que {}'.format(n1,n2))
elif n2>n1:
    print('{} é maior que {}'.format(n2,n1))
elif n1==n2:
    print('{} e {} sao iguais'.format(n1,n2))