#aula 8 - condições
#pratica

#nome=str(input('qual é seu nome? '))
#if nome=='Caua':
#    print('belo nome!')
#else:
#    print('nome feio')
#print('Bom dia {}'.format(nome))

n1=float(input('digite sua primeira nota '))
n2=float(input('digite sua segunda nota '))
media=(n1+n2)/2
print('sua média foi {}'.format(media))
if media>=6.0:
    print('Parabens! sua nota foi acima ou na media!')
else:
    print('Sua nota foi abaixo da média...')
