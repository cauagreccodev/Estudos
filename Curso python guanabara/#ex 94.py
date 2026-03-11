#ex 94

pessoas=[]
fem=[]
acima_media=[]
while True:
    pessoa={}
    pessoa['Nome']=str(input('Digite o nome: '))
    while True:
        pessoa['Sexo']=str(input('Digite o sexo M/F: ')).upper()[0]#[0] para pegar a primeira letra
        if pessoa['Sexo'] in 'MF':
            break
        print('ERRO! SÓ É ACEITO M OU F')

   
    pessoa['Idade']=int(input('Digite sua idade: '))
    

    pessoas.append(pessoa.copy())
    
    if pessoa['Sexo']=='F':
        fem.append(pessoa['Nome'])
    while True:
        cont=str(input('Deseja continuar? S/N: ')).upper()[0] #[0] para pegar a primeira letra
        if cont in 'SN':
            break
        print('ERRO! DIGITE APENAS S OU N')  
    if cont=='N':
        break

media=sum(p['Idade'] for p in pessoas)/len(pessoas)

for p in pessoas:
    if pessoa['Idade'] > media:
        acima_media.append(pessoa['Nome'])

print(f'Foram cadastradas {len(pessoas)} pessoas')
print(f'A media de idade é de {media}')
print(f'{fem}')
print(f'{acima_media}')

        
