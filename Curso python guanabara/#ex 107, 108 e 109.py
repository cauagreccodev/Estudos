#ex 107 e 108
from utilidades import moeda

p=float(input('Digite o preco: R$'))

print(f'A metade de {moeda.moedaf(p)} é {moeda.metade(p, True)}')
print(f'O dobro de {moeda.moedaf(p)} e {moeda.dobro(p, True)}')
print(f'Diminuindo 10% de {moeda.moedaf(p)}, temos {moeda.diminuir(p, 10, True)}')
print(f'Aumentando 10% de {moeda.moedaf(p)}, temos {moeda.aumentar(p, 10, True)}')