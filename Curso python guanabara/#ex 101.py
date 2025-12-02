#ex 101
from datetime import date

def voto():
    ano_nasc=int(input('digite seu ano de nascimento: '))
    idade=date.today().year-ano_nasc

    if idade <16:
        print('NEGADO')
    elif idade >16 and idade <=17:
        print('OPCIONAL')
    else:
        print('OBRIGATORIO')

voto()