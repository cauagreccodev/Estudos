#ex 54
maior=0
menor=0
for c in range(0,7):
    idade=int(input('Digite a idade da pessoa {}: '.format(c+1)))
    if idade>=18:
        maior+=1
    elif idade<18:
        menor+=1
        

print('{} pessoa(s) já alcancaram a maioridade e {} pessoa(s) ainda nao'.format(maior,menor))
        

