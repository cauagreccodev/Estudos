#ex 93

jogador={}
partidas=[]
jogador['nome'] = str(input('Digite o nome do jogador: '))
tot = int(input('Digite quantas partidas ele jogou: '))

for c in range(0,tot):
    partidas.append(int(input(f'Quantos gols na partida {c+1} ')))

jogador['gols'] = partidas[:] 
jogador['total'] = sum(partidas)
print(f'o nome tem o valor {jogador["nome"]}')
print(f'O campo gols tem o valor {jogador["gols"]}')
print(f'O campo total de gols tem o valor {jogador["total"]}')
print('='*30)
print(f'O jogador {jogador["nome"]} jogou um total de {tot} partidas')

for k, v in jogador.items():
    print(f'no campo {k} tem o valor {v}')
print(f'O jogador {jogador["nome"]} jogou {len(jogador["gols"])} partidas ')

for i,v in enumerate (jogador['gols']):
    print(f'    -> na partida {i+1} ele fez {v} gols')
print(f'Foi um total de {jogador["total"]} gols')

    
