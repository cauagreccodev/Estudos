#ex 22

nome_completo=str(input('digite seu nome completo: ')).strip()

print('seu nome completo em maiusculo fica: ',nome_completo.upper())
print('seu nome completo em minusculo fica:',nome_completo.lower())
print('O nome completo possui {} letras'.format(len(nome_completo)-nome_completo.count(' ')))
print('O primeiro nome possui {} letras'.format(nome_completo.find(' ')))