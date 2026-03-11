#ex 80
num=[]

for c in range (0,5):
    n=int(input('digite um valor: '))
    if c==0 or n > num[-1]:
        num.append(n)
    else:
        pos=0
        while pos < len(num):
            if n <= num[pos]:
                num.insert(pos,n)
                break
            pos+=1

print(f'Os valores da lista sao {num}')
