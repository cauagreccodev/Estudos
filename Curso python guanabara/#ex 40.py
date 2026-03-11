#ex 40

nota1=float(input('digite sua primeira nota: '))
nota2=float(input('digite sua segunda nota: '))
media=(nota1+nota2)*0.5
print (media)
if nota1 < 5:
    print('Sua média foi menor que 5, logo você foi REPROVADO...')
elif nota1 > 7:
    print('Sua média foi maior ou que 7, logo você foi APROVADO, PARABÉNS!!!! ')
else:
    print('Sua média foi menor que 7, porém maior que 5, você ainda pode recuperar!!!')