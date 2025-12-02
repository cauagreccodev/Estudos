#ex 70
qtd_mais_1000=0
soma=0
menor=0
while True:
    nome_prod=str(input('Digite o nome do produto: '))
    preco_prod=float(input('Digite o preco dele: '))
    
    soma+=preco_prod
    
    if preco_prod>1000:
        qtd_mais_1000 += 1
    if preco_prod < preco_prod:
        menor = preco_prod
    else:
        menor = preco_prod   
        menor == nome_prod
    contin = ' '
    while contin not in 'SN':
        contin=str(input('Deseja continuar? S/N: ')).upper()
    if contin == 'N':
        break
print(f'''
    [A]O total gasto foi {soma:.2f}R$ 
    [B]{qtd_mais_1000} produto(s) custa(m) mais de 1000R$ 
    [C]o produto mais barato foi {nome_prod}, e custou {menor:.2f}R$''')