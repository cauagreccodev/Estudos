#ex 55
maior=0
menor=0

for c in range(0,5):
    peso=float(input('digite o peso da pessoa {}: '.format(c+1)))
    if c==1:
        maior = peso
        menor = peso
    else:
        if peso>maior:
            maior=peso
        
        if peso<menor:
            menor=peso

print('O maior peso é o {} e o menor peso e o {}'.format(maior,menor))
