import pandas as pd

#series_obj = pd.Series([1,7,9,13,99])

#print(series_obj)

#series_objeto2 = pd.Series([4,7,8,-2],index =['alfa','beta','teta','gama'])

#print (series_objeto2)

nome_cidade = pd.Series(['Maringa','Itabira','Barbacena'])
populacao = pd.Series([403.063,120.904,150.001])

populacao_cidades = dict(zip(nome_cidade,populacao))

print (populacao_cidades)

del populacao_cidades ['Maringa']

print(populacao_cidades)
#print(pd.DataFrame({"Cidade":nome_cidade,"População": populacao}))


