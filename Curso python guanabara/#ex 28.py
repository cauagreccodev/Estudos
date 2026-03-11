#ex 28
import random

print('pensei em um número de 0 a 5...')

n_aleatorio=random.randint(0,5)

adivinhe=int(input('adivinhe o número que eu pensei: '))

if adivinhe==n_aleatorio:
    print('Você acertou miserável!')
else:
        print('Você errou bobao! Eu pensei no {}'.format(n_aleatorio))