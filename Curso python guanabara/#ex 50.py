#ex 50
s=0

for c in range (0,6):
    n=int(input('digite os valores para fazermos a soma: ')) 
    if n%2==0:
        s += n
       
print('a soma desses valores deu {}'.format(s))