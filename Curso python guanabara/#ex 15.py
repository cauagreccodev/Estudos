#ex 15

qtd_km=float(input('digite quantos Kms foram percorridos: '))
qtd_dia=float(input('digite por quantos dias ele foi alugado: '))

gasto=(0.15*qtd_km)+(60*qtd_dia)

#preco_km=0.15*qtd_km
#preco_dia=60*qtd_dia
#gasto=preco_dia+preco_km

print('O carro percorreu {}Kms e foi alugado por {} dias, logo o gasto foi de {}'.format(qtd_km,qtd_dia,gasto))