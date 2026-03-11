#ex 44
preco = float(input('Preco do produto: '))
forma_pag = int(input('''Qual sua forma de pagamento?: 
                      [1] Dinheiro
                      [2] Cartao
                      Insira sua opcao: '''))

desc_10 = preco -  (preco*10/100)
desc_5 = preco - (preco*5/100)
juros_20 = preco + (preco*20/100)
parcelado_2=preco/2


if forma_pag == 1:
    print('Você recebeu 10% de desconto, o preco ficou {}'.format(desc_10))


if forma_pag == 2:
    qts_vezes=int(input('quantas vezes voce quer parcelar no cartao? '))
    parcelado_mais=juros_20/qts_vezes
    if qts_vezes == 1:
        print('Voce recebeu 5% de desconto, o preco ficou {}'.format(desc_5))
    elif qts_vezes == 2:
        print('O preco ficou {}, parcelando em {}x, fica {} por mes'.format(preco,qts_vezes,parcelado_2))
    elif qts_vezes > 2 and qts_vezes<=12:
        print('O preco do produto parcelado em mais de 2 vezes possui juros de 20%, logo o preco fica {}, parcelando em {}x, fica {} por mes'.format(juros_20,qts_vezes,parcelado_mais))
