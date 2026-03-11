#ex 63
termos=int(input('digite quantos termos voce quer mostrar: '))
f1=0
f2=1
cont=3
print('{} -> {}'.format(f1,f2),end='')
while cont <= termos:
    f3=f2+f1
    print(' -> {}'.format(f3),end='')
    f1=f2
    f2=f3
    cont+=1

