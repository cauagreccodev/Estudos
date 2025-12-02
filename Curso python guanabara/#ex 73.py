#ex 73
brasileirao_2025=("Flamengo","Cruzeiro","Bragantino","Palmeiras","Bahia","Fluminense","Atletico-MG","Botafogo","Mirassol","Corinthians",
                  "Gremio","Ceará","Vasco","Sao Paulo","Santos","Vitoria","Internacional","Fortaleza","Juventude","Sport")

print(f'Os 5 primeiros colocados sao {brasileirao_2025[0:5]}')
print('-'*20)
print(f'Os 4 ultimos colocados sao{brasileirao_2025[16:20]}')
print('-'*20)
print(f'A ordem alfabética está como{sorted(brasileirao_2025)}')
print('-'*20)
#print(f'O time do {brasileirao_2025[6]} está em 7 colocado no Brasileirao 2025')
#print('-'*20)
#na ultima pode ser tambem
print(f'O time do {brasileirao_2025[6]} está em {brasileirao_2025.index ("Atletico-MG")+1} posicao')
print('-'*20)