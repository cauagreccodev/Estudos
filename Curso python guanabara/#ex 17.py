#ex 17

import math 

c1=float(input('qual o primeiro cateto? '))
c2=float(input('qual o segundo cateto? '))

#h=math.hypot(c1, c2)
h=(c1**2 + c2**2)**0.5

print('a soma dos catetos dá a hipotenusa {:.2f}'.format(h))