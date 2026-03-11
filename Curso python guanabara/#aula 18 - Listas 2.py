#aula 18 - Listas 2

#teste=[]
#teste.append('Caua')
#teste.append('18')
#galera=[]
#galera.append(teste[:])
#teste[0]='gustavo'
#teste[1]=19
#galera.append(teste[:])
#print(galera)

#sinal [:] para copia 

#galera = [['Joao',19],['Ana',33],['Joaquim',13],['Maria',45]]

#for p in galera:
    #print(p[1])
#    print(f'{p[0]} tem {p[1]} anos de idade')

galera=[]
dado=[]
totmai=totmen=0
for c in range(0,3):
    dado.append(str(input('Nome: ')))
    dado.append(int(input('idade: ')))
    galera.append(dado[:])
    dado.clear()

#print (galera)

for p in galera:
    if p[1] >=21:
        print(f'{p[0]} é maior de idade')
        totmai+=1
    else:
        print(f'{p[0]} é menor de idade')
        totmen+=1
print(f'temos {totmai} maiores de idade e {totmen} menores de idade')