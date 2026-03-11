#ex 68
import random
v_consec=0
soma=0
while True:
    par_impar=str(input('Par ou Impar??? DIGITE P PARA PAR E I PARA IMPAR: ')).upper()
    if par_impar=='P':
        n_aleatorio=random.randint(0,5)
        num=(int(input('agora digite um numero de 0 a 5: ')))
        soma = n_aleatorio + num
        if soma%2==0:
            print('Você ganhou!!! VOU ATÉ GANHAR!!!')
            v_consec+=1
        else:
            break
    if par_impar=='I':
        n_aleatorio=random.randint(0,5)
        num=(int(input('Agora digite um numero de 0 a 5: ')))
        soma= n_aleatorio + num
        if soma%2!=0:
            print('Você ganhou!!! VOU ATÉ GANHAR!!!')
            v_consec+=1
        else:
            break
print(f'GANHEI!!! Você teve {v_consec} vitórias seguidas!!!')