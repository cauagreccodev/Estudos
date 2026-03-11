#ex 36
#:.2f
valor_casa=float(input('digite o valor da casa: '))
salario=float(input('digite seu salario: '))
anos=float(input('digite em quantos anos voce vai pagar: '))

valor_prestacao_m=valor_casa/(anos*12)

if valor_prestacao_m > salario* (30/100):
    print('Seu empréstimo será de {}, logo excedeu 30% do valor do salário, o empréstimo foi negado!!!'.format(valor_prestacao_m))
else:
    print('O empréstimo a ser pago será de {:.2f}R$'.format(valor_prestacao_m))