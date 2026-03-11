#ex 42

c1=float(input('digite o comprimento 1: '))
c2=float(input('digite o comprimento 2: '))
c3=float(input('digite o comprimento 3: '))

if c1 < c2 + c3 and c2 < c1+c3 and c3 < c2+c1:
    print('A medida forma um triângulo!!!')
    
    if c1==c2==c3:
        print('O triângulo é equilátero')
    elif c1==c2!=c3 or c2==c3!=c1 or c1==c3!=c2:
        print('O triângulo é isósceles')
    elif c1!=c2!=c3 or c3!=c2!=c3 or c2!=c3!=c1:
        print('O triângulo é escaleno')
else:
    print('A medida nao forma um triângulo')