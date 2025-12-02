#ex 74
from random import randint

num= (randint (0,9),randint (0,9),randint (0,9),randint (0,9),randint (0,9),randint (0,9))
maior_numero=max (num)
menor_numero=min (num)
print(f'os números sorteados foram {num}')
print('-'*20)
print(f'o maior numero sorteado foi {maior_numero}')
print('-'*20)
print(f'o menor numero sorteado foi {menor_numero}')
print('-'*20)
