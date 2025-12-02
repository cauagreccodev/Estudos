#aula 15-interrompendo repeticoes
#pratica
#cont=1

#while True:
#    print(cont, '',end='')
#    cont+=1
#    if cont>10:
#        break
#print('acabou')

#n = s = 0
#while True:
#    n=int(input('Digite um numero: '))
#    if n == 999:
#        break
#    s+=n
        
# print('A soma vale {}'.format(s))

#AGORA COM F Strings

# print(f'A soma vale {s}')

#EX DE F STRING

nome = 'GUSTAVO'
idade = '19'
salario = 1512.00
print(f'O {nome:-^20} tem {idade} anos e ganha {salario:.2f} reais.') #PYTHON 3.6+
print('O {} tem {} anos'.format(nome,idade)) #PYTHON 3
# print('O %s tem %d anos.'  % (nome,idade)) #PYTHON 2