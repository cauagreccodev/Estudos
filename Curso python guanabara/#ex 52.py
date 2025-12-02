#ex 52

num=int(input('digite um numero: '))

if num==1:
    print ('nao e primo')
elif num%2==0 and num!=2:
    print('{} nao é primo'.format(num))
elif num%3==0 and num!=3:
    print('{} nao é primo'.format(num))
elif num%5==0 and num!=5:
    print('{} nao é primo'.format(num))
else:
    print('{} é primo'.format(num))