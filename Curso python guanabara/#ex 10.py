#ex 10

reais=float(input('quantos reais você tem na carteira? '))
#dolar=5.41
reais_para_dolar= reais/5.41
print('Com esse valor em {:.2f}R$, você pode comprar {:.2f}$'.format(reais,reais_para_dolar))