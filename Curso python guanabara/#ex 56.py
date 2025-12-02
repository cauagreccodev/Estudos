#ex 56
soma_id=0
media_id=0
h_mais_velho=0
nome_h_mais_velho= ''

F_menos_20=0

for c in range(0,4):
    nome = str(input('digite o nome: ')).strip()
    idade = int(input('digite a idade: '))
    sexo = str(input('digite o sexo (M) para Masculino e (F) para Feminino: ')).strip()
    soma_id += idade

    if c==1 and sexo in 'Mm':
        h_mais_velho = idade
        nome_h_mais_velho=nome

    if sexo in 'Mm' and idade > h_mais_velho:
        h_mais_velho = idade
        nome_h_mais_velho = nome
    if sexo in 'Ff' and idade <20:
        F_menos_20 +=1

    
media_id = soma_id/4
print('a média de idade entre eles é {}'.format(media_id))

print('a maior idade é a {}, e o nome dele é {}'.format(h_mais_velho, nome_h_mais_velho))

print('{} Mulheres tem menos de 20 anos'.format(F_menos_20))
