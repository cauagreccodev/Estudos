#ex 104
def leiaInt(txt):
    while True:
        try:
            num=int(input(txt))
            break
        except ValueError:
            print('ERRADO, APENAS NUMEROS INTEIROS')
    

n=leiaInt('digite um valor inteiro: ')
print(f'Voce digitou o valor {n}')
        
        


