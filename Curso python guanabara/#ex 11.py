#ex 11

largura=float(input('qual a largura da parede? '))
altura=float(input('qual a altura da parede? '))

area=altura*largura
litro_tinta=area/2

print('a área é igual a {}'.format(area))
print('Com a área de {}, é preciso de {} litros de tinta'.format(area,litro_tinta))