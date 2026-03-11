#aula 14 - estrutura de repeticao while
#pratica

#c=1
#while c <10:
#    print (c)
#    c+=1
    #c=c+1
r='S'
par=impar=0
while r == 'S':
    n=int(input('digite um numero: '))
    r=str(input('quer continuar? S/N: ')).upper()
    if n!=0:
        if n %2==0:
            par+=1
        else:
            impar+=1
print('Tem {} numero(s) par(es) e {} numero(s) impar(es)'.format(par,impar))
print('FIM')

