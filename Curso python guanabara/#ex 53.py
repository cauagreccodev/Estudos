#ex 53
frase=str(input('Digite uma frase ou palavra: '))
frase_invertida= ''.join(frase[::-1] for p in frase.split())

print (frase_invertida)

if frase_invertida==frase:
    print('É um palíndromo')
else:
    print('Nao é um palíndromo')