#ex 106
def minisistema():
    while True:
        print('\033[30;42m=\033[m'*23)
        print('\033[30;42mSISTEMA DE AJUDA PYHELP\033[m')
        print('\033[30;42m=\033[m'*23)
        try:
            opc=input('\033[35;45mFuncao ou Biblioteca (Digite fim para encerrar o programa): ')
            if opc == 'fim':
                break
            print(f'\033[34;44mAcessando o manual do {opc}')
            (f'\033[36;46m{help(opc)}')
        except ValueError:
            print('ESSA FUNCAO OU BIBLIOTECA NAO EXISTE')
       
    print('Programa encerrado!')

minisistema()