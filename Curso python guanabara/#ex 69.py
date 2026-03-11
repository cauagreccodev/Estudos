#ex 69
qtd_idade_18= 0
qtd_H = 0
qtd_idade_20_M= 0
while True:
    idade=int(input('digite sua idade: '))
    sexo=str(input('digite seu sexo [M] para Masculino e [F] para feminino: ')).upper()
    if idade > 18:
        qtd_idade_18 += 1
    if sexo =='M':
        qtd_H += 1
    if idade <20 and sexo == 'F':
        qtd_idade_20_M += 1
    contin=' '
    while contin not in 'SN':
        contin=str(input('Deseja continuar? S/N: ')).upper()
    if contin == 'N':
        break
print(f''' 
[A] {qtd_idade_18} pessoa(s) tem mais de 18 anos
[B] {qtd_H} homem(es) foram cadastrados
[C] {qtd_idade_20_M} mulher(es) tem menos de 20 anos ''')
