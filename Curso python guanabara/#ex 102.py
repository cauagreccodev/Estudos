#ex 102
import math

def fatorial(fact,show=False):
    for c in range(fact,0,-1):
        if show:
            print (c,end=' ')
            if c>1:
                print(' x ',end=' ')
    
    
    print(f'= {math.factorial(fact)}')
    print('='*30)
    


print(fatorial(5,show=True))    