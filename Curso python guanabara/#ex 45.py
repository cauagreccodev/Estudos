#ex 45
import random 

print('PEDRA PAPEL TESOURA!!!')

opc=int(input('''[0] Pedra
[1] Papel
[2] Tesoura
Digite sua opcao: '''))

jokempou=['Pedra','Papel','Tesoura']

escolha_bot=random.randint(0,2)

print('='*30)
print('PEDRA!!!')
print('PAPEL!!!')
print('E TESOURA!!!')
print('='*30)
print ('O jogador jogou {} e a o bot jogou {}'.format(jokempou[opc],jokempou[escolha_bot]))
print('='*30)

if opc == 2 and escolha_bot == 1:
    print('VOCÊ VENCEU MISERÁVEL!!!')
elif opc == 1 and escolha_bot == 0:
    print('VOCÊ VENCEU MISERÁVEL!!!')
elif opc == escolha_bot:
    print('EMPATE!!!')
elif opc == 0 and escolha_bot == 1:
    print('EU GANHEI PERDEDOR!!!')
elif opc == 2 and escolha_bot == 0:
    print('EU GANHEI PERDEDOR!!!')
print('='*30)