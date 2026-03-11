#ex 67
tab=1

while True:
    n=int(input('Digite um numero inteiro: '))
    if n>=0:
        print('='*20)
        print(f'A tabuada de {n} fica: ')
        for c in range (0,11):
            print(f'{n} x {c} = {n*c}')
        print('='*20)
    elif n<0:
        break
print('='*20)
print('Fim do Programa!!!')
print('='*20)