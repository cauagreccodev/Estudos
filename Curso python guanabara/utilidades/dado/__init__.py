def leiadinheiro(msg):
    while True:
        try:
            preco = float(input(msg))
            return preco
        except ValueError:
            print('DIGITE UM VALOR MONETARIO')

