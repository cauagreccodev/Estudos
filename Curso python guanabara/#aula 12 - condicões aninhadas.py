#aula 12 - condicões aninhadas
#pratica

nome=str(input('qual é seu nome: '))

if nome == 'Caua':
    print('que nome bonito Caua!!!')
elif nome == 'Gustavo':
    print('seu nome é bonito também!!!')
elif nome in 'Pedro Joao Douglas':
    print('seu nome é bem popular')
else:
    print('Que nome normal...')

print('bom dia {}!!!'.format(nome))
