#ex 115

sistema=[]
while True:
    opc=int(input('''O que voce deseja fazer? 
        [1] Cadastrar uma pessoa
        [2] Listar as pessoas
        [3] Encerrar Programa!!!
        Digite sua opcao: '''))

    if opc ==1:
        try:
            sistema.append(str(input('Digite seu nome: ')))
        except ValueError:
            print('DIGITE ALGUMA COISA')
        try:
            sistema.append(int(input('Digite sua idade: ')))
        except ValueError:
            print('DIGITE A IDADE COMO UM NUMERO INTEIRO')
        
    
    elif opc==2:
        print(sistema)
    
    elif opc>3:
        print('NAO EXISTE ESSA OPCAO')
    
    elif opc==3:
        break

print('Fim do programa!')

    