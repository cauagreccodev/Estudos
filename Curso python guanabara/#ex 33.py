#ex 33

num1=int(input('digite um numero inteiro: '))
num2=int(input('digite outro numero inteiro: '))
num3=int(input('digite outro numero inteiro: '))

if num1 > num2 > num3:
    print('o maior número é {} e o menor é {}'.format(num1,num3))
if num2 > num1 > num3:
    print('o maior número é {} e o menor é {}'.format(num2,num3))
if num3 > num2 > num1:
    print('o maior número é {} e o menor é {}'.format(num3,num1))
if num2 > num3 > num1:
    print('o maior número é {} e o menor é {}'.format(num2,num1))
if num3 > num1 > num2:
    print('o maior número é {} e o menor é {}'.format(num3,num2))
if num1 > num3 > num2:
    print('o maior número é {} e o menor é o {}'.format(num1,num2))