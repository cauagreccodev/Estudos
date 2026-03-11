def metade(moeda, formatado=False):
    res = moeda / 2
    return res if formatado is False else moedaf(res)


def dobro(moeda, formatado=False):
    res = moeda * 2
    return res if formatado is False else moedaf(res)


def diminuir(moeda, red, formatado=False):
    res = moeda - (moeda * red / 100)
    return res if formatado is False else moedaf(res)


def aumentar(moeda, aum, formatado=False):
    res = moeda + (moeda * aum / 100)
    return res if formatado is False else moedaf(res)


def moedaf(preco=0, moeda='R$'):
    return f'{moeda}{preco:.2f}'.replace('.', ',')


def resumo(moeda, aum, red):
    print('=' * 20)
    print('RESUMO DO VALOR')
    print('=' * 20)
    print(f'Preco analisado {moedaf(moeda)}')
    print(f'Dobro do preco: {dobro(moeda, True)}')
    print(f'Metade do preco: {metade(moeda, True)}')
    print(f'Aumento de {aum}%: {aumentar(moeda, aum, True)}')
    print(f'Reducao de {red}%: {diminuir(moeda, red, True)}')