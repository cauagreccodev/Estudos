#ex 88
import random
from time import sleep
sorteios=[]
qtd_sorteios=int(input('Digite a quantidade que voce deseja de sorteios: '))

for c in range(qtd_sorteios):
        valores_sorteios = [random.randint(0,50) for c in range (0,4)]
        sorteios.append(valores_sorteios[:])
        valores_sorteios.clear

print(sorteios)

