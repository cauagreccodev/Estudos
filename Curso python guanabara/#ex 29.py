#ex 29

v=int(input('Velocidade do carro: '))
preco_multa=(v-80)*7
if v>80:
    print('Você foi multado! Você deve pagar um valor de {}R$'.format(preco_multa))
else:
    print('A velocidade está de acordo com os parâmetros')