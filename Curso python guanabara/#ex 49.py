#ex 49

n=int(input('digite um numero inteiro: '))

print('='*20)
print('A tabuada de {} fica:'.format(n))
for c in range(1,11):
    print('{} x {} = {}'.format(n,c,n*c))
print('='*20)
print('FIM DO PROGRAMA!!!')