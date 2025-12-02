#ex 37

num=int(input('digite um número inteiro: '))
opc=int(input('''para qual base você quer converter?      
[1] binário
[2] octal
[3] hexadecimal
 '''))

if opc==1:
    print('o número {} em binário fica {}'.format(num, bin(num)[2:]))
elif opc==2:
    print('o número {} em octal fica {}'.format(num, oct(num)[2:]))
elif opc==3:
    print('o número {} em hexadecimal fica {}'.format(num, hex(num)[2:]))
