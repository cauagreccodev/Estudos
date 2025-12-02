#ex 31

n=int(input('Digite quantos quilômetros você vai percorrer na sua viagem: '))

preco_menor_200=0.5*n
preco_maior_200=0.45*n

if n<=200:
    print('Você vai percorrer {}Kms, logo o preco a ser pago por ser até 200Kms é de {}R$'.format(n,preco_menor_200))
else:
    print('Você vai percorrer {}Kms, logo o preco a ser pago por ser mais de 200Kms é de {}R$'.format(n,preco_maior_200))
