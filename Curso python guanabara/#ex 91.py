#ex 91
import random
from time import sleep
from operator import itemgetter
dado={'jogador1': random.randint(1,6), 'jogador2': random.randint(1,6), 'jogador3': random.randint(1,6), 'jogador4': random.randint(1,6)}
ranking={}
print(f'O jogador 1 tirou {dado["jogador1"]}')
sleep(1)
print(f'O jogador 2 tirou {dado["jogador2"]}')
sleep(1)
print(f'O jogador 3 tirou {dado["jogador3"]}')
sleep(1)
print(f'O jogador 4 tirou {dado["jogador4"]}')

ranking= sorted(dado.items(),key=itemgetter(1), reverse=True)
#print(ranking)

for i, v in enumerate(ranking):
    print(f'O {v[0]} tirou {v[1]} e ficou em {i+1} lugar')
    sleep(1)