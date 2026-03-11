#ex 39
from datetime import date
atual=date.today().year
ano_nasc=int(input('digite seu ano de nascimento: '))
idade = atual- ano_nasc


if idade == 18:
    print('Já está na hora de se alistar!')
elif idade > 18:
    tempo_restante = idade - 18
    print('Já passou da hora de se alistar, você passou {} ano(s) do prazo!!!'.format(tempo_restante))
    ano_alis= atual - tempo_restante
    print('Seu alistamento deveria ter sido feito em {}'.format(ano_alis))
else:
    tempo_restante = 18 - idade
    print('Ainda nao é hora de se alistar, ainda falta {} ano(s) para se alistar'.format(tempo_restante))
    ano_alis= atual + tempo_restante
    print('Seu alistamento deverá ser feito em {}'.format(ano_alis))