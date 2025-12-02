#ex 4

valor=input('Digite algo: ')
print('O tipo primitivo é',type(valor))

print('É numérico?',valor.isnumeric())

print('É alfabético?',valor.isalpha())

print('Está totalmente em minúsculo?',valor.islower())

print('Está totalmente em maiúsculo?',valor.isupper())

print('Está Capitalizada?',valor.istitle())

print('Só tem espaços?',valor.isspace())