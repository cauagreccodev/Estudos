#ex 41
from datetime import date
ano_nasc=float(input('digite seu ano de nascimento para definirmos sua categoria: '))
atual=date.today().year

idade = atual-ano_nasc

if idade <9:
    print('Categoria Mirim')
elif idade >=9 and idade <14:
    print('Categoria Infantil')
elif idade >=14 and idade <19:
    print('Categoria Junior')
elif idade ==19:
    print('Categoria Senior')
elif idade >=20:
    print('Categoria Master')