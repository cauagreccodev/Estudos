#ex 113

def leiaInt(txt):
    while True:
        try:
            num=int(input(txt))
            return num
        except ValueError:
            print('ERRADO, APENAS NUMEROS INTEIROS')
        
def leiaFloat(txt):
    while True:
        try:
            num=float(input(txt))
            return num
        except ValueError:
            print('ERRADO, APENAS NUMEROS INTEIROS')
        return 0
    

n1=leiaInt('digite um valor inteiro: ')
print(f'Voce digitou o valor {n1}')

    

n2=leiaFloat('digite um valor real: ')
print(f'Voce digitou o valor {n2}')