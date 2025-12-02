#ex 103
def ficha():
    nome=str(input('Digite o nome do jogador: '))
    n_gols=str(input('Digite quantos gols ele fez no campeonato: '))
    if nome=='':
        nome='<desconhecido>'
        n_gols=0

    elif nome == '' and n_gols == '':
        nome='<desconhecido'
        n_gols=0

    elif n_gols=='':
        n_gols=0
    else:
        n_gols= int(n_gols)
    
    print(f'O jogador {nome} fez {n_gols} gols no campeonato')

ficha()