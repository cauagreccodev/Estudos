#ex 27

nome=str(input('digite seu nome completo: ')).split()


print('primeiro nome: {}'.format(nome[0]))

print('ultimo nome: {}'.format(nome[len(nome)-1]))

#o -1 com o len sempre vai se referir ao ultimo valor da lista, mesma coisa do -2 em diante (penultimo, antepenultimo, etc.)