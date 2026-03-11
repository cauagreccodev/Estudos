#ex 57
 
sexo='MF'

sexo=str(input('Qual o seu sexo? M/F: ')).strip().upper()
while not sexo in 'MmFf':
    print('So existem duas opcoes, tente novamente!')
    sexo=str(input('Qual o seu sexo? M/F: ')).strip().upper()
    
print('Sexo {} registrado com sucesso!'.format(sexo))
    
        
     
 