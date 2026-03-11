#ex 35

c1=float(input('digite o comprimento 1: '))
c2=float(input('digite o comprimento 2: '))
c3=float(input('digite o comprimento 3: '))

if c1 < c2 + c3 and c2 < c1+c3 and c3 < c2+c1:
    print('A medida forma um triângulo!!!')
else:
    print('A medida nao forma um triângulo...')