#ex 34

salario=float(input('digite seu salário para que possamos fazer o aumento: '))

maiorq1250=salario+(salario*0.1)
menor_ou_igual_a_1250=salario+(salario*0.15)

if salario > 1250:
    print('Seu salário é de {}R$, logo o aumento do salário é de {}R$'.format(salario,maiorq1250))
if salario <= 1250:
    print('Seu salário é de {}R$, logo o aumento do salário é de {}R$'.format(salario,menor_ou_igual_a_1250))