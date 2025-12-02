#aula 19 - Dicionários

pessoas={'nome': 'Caua', 'sexo':'M', 'idade': 18 }
print(pessoas['idade'])
print(f'O {pessoas["nome"]} tem {pessoas["idade"]}')
#TEM QUE TER ASPAS DUPLAS NO PRINT FORMATADO
print(pessoas.keys())
print(pessoas.values())
print(pessoas.items())
#del pessoas['sexo']
#pessoas['nome'] = 'Gustavo'
#for k in pessoas.keys():
#    print(k)
#for k in pessoas.values():
#    print(k)    
#for k in pessoas.items():
#    print(k)    



#AGORA LISTA COM DICIONARIO
brasil=[]
estado1= {'uf': 'Rio de Janeiro', 'sigla': 'RJ'}
estado2= {'uf': 'Minas Gerais', 'sigla': 'MG'}
brasil.append(estado1)
brasil.append(estado2)
print(brasil)
print(brasil[1]['uf'])

##estado = dict()
#brasil = list()

#for c in range(0,3):
#    estado['uf'] = str(input('Unidade Federativa: '))
#    estado['sigla'] = str (input('Sigla do Estado: '))
#    brasil.append(estado.copy())

#for e in brasil:
    #for k, v in e.items():
    #    print(f'O campo {k} tem valor {v}')
#    for v in e.values():
#        print (v,end=' ')
#    print()