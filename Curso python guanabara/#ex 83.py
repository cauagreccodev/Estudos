#ex 83
num=[]
n=str(input('digite uma expressao matematica com parenteses '))

for s in n:
    if s=='(':
        num.append('(')
    elif s==')':
        if len(num)>0:
            num.pop()
        else:
            num.append(')')
            break

if len (num)==0:
    print('a expressao esta valida!')
else:
    print('sua expressao esta errada')



