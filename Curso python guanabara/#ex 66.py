#ex 66
soma=0
qtd_num=0
while True:
    num=int(input('Digite um numero inteiro: '))
    if num!=999:
        soma+=num
        qtd_num+=(num//num)
    elif num==999:
        break
print(f'voce digitou {qtd_num}, e a soma deles deu {soma}')