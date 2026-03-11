#ex 26

frase=str(input('Digite uma frase: ')).strip()

print("Na frase apareceu a letra 'A' {} vezes".format(frase.lower().count('a')))

print("A letra 'A' apareceu pela primeira vez na posicao {}".format(frase.lower().find('a')))

print("A letra 'A apareceu pela ultima vez na posicao {}".format(frase.lower().rfind('a')))