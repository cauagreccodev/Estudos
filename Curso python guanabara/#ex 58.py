#ex 58
import random
tentativas=0
print('pensei em um número de 0 a 5...')

n_aleatorio=random.randint(0,5)

adivinhe=int(input('adivinhe o número que eu pensei: '))

while adivinhe!=n_aleatorio:
    print('Errou! Tente de novo')
    adivinhe=int(input('adivinhe o número que pensei: '))
    tentativas+=1

print('Voce conseguiu com {} tentativas'.format(tentativas))