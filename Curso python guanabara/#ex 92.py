#ex 92
import datetime
registro={}

registro['nome'] = str(input('Digite seu nome: '))
registro['anonasc'] = int(input('Digite seu ano de nascimento: '))
registro['ctps'] = int(input('Digite sua carteira de trabalho (digite 0 se ela nao existe): '))
if registro['ctps']!=0:
    registro['contratacao'] = int(input('Digite o ano que foi contratado: '))
    registro['salario'] = int(input('Digite seu salario: '))

idade=datetime.date.today().year - registro['anonasc']

tempocontr=datetime.date.today().year - registro['contratacao']
temporest=35 - tempocontr
registro['aposentadoria']=idade+temporest
print(registro.items())
print(f'Nome tem o valor {registro["nome"]}')
print(f'idade tem o valor {idade}')
if registro['ctps'] !=0 and registro['ctps'] <0:
    print(f'Carteira de trabalho tem o valor {registro["ctps"]}')
print(f'Contratacao tem o valor {registro["contratacao"]}')
print(f'Salario tem o valor {registro["salario"]}')
if temporest>=35:
    print('Voce ja pode se aposentar')
else:
    print(f'aposentadoria tem o valor {registro["aposentadoria"]}')

#OU PARA DEIXAR OS PRINTS MAIS RAPIDOS DE FAZER
for k,v in registro.items():
    print(f'   - {k} tem  o valor {v}')
