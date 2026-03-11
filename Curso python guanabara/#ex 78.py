#ex 78
num = []
maior=0
menor=0

for c in range(0,5):
    num.append(int(input(f'Digite um numero para a posicao {c}: ')))
    if c == 0:
        maior = num[c]
        menor = num[c]
    else:
        if num[c] > maior:
            maior = num[c]
        if num[c] < menor:
            menor =num[c]
  
print(f'Voce digitou os valores {num}')
print(f'O maior numero é {maior} na posicao', end=' ')
for i,v in enumerate(num):
    if v ==maior:
        print(f'{i}... ', end=' ')
print(f'O menor numero é {menor} na posicao', end=' ')
for i,v in enumerate(num):
    if v == menor:
        print(f'{i}... ', end=' ')
