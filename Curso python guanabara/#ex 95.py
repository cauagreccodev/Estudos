#ex 95
jogadores=[]
jogador={}
partidas=[]

while True:
    jogador.clear()
    jogador['nome'] = str(input('Digite o nome do jogador: '))
    tot = int(input('Digite quantas partidas ele jogou: '))
    partidas.clear()
    for c in range(0,tot):
        partidas.append(int(input(f'Quantos gols na partida {c+1} ')))
    jogador['gols'] = partidas[:] 
    jogador['total'] = sum(partidas)
    
    jogadores.append(jogador.copy())

    while True:
        conti=str(input('Deseja continuar? S/N: ')).upper()
        if conti in 'SN':
            break
        print('ACEITO APENAS S OU N')
    if conti=='N':
        break
print('cod ',end='')
for i in jogador.keys():
    print(f'{i:<15}',end='')
print('='*30)
for k,v in enumerate(jogadores):
    print(f'{k:>3} ',end='')
    for d in v.values():
        print(f'{str(d):<15}',end='')
    print()
print('='*30)
    
while True:
    busca=int(input('Mostrar dados de qual jogador? (999 para encerrar): '))
    if busca == 999:
        break
    if busca >= len(jogadores):
        print(f'ERRO! nao existe jogador com codigo {busca}')
    else:
        print(f' --- LEVANTAMENTO DO JOGADOR {jogadores[busca]["nome"]}:')
        for i, g in enumerate(jogadores[busca]['gols']):
            print(f'    No jogo {i+1} fez {g} gols.')
    print('='*30)
print('VOLTE SEMPRE !!!!')