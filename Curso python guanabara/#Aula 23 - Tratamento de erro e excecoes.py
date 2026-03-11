#Aula 23 - Tratamento de erro e excecoes

try:
    a=int(input('Numerador: '))
    b=int(input('Denominador: '))
    r=a/b

except(ValueError,TypeError):
    print('Tivemos um problema com os tipos de dados que digitou')

except ZeroDivisionError:
    print('Nao é possivel dividir um numero por zero!')

except KeyboardInterrupt:
    print('O usuario preferiu nao informar os dados!')

except Exception as error:    
    print(f'Tivemos um problema, o problema foi {error.__class__}')

else:
    print(f'O resultado e {r}')
finally:
    print(f'Volte sempre! Muito obrigado!')