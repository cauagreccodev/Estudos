# %%
import pandas as pd

autor = ['sun tzu','fernando pessoa','thomas mann','joao guimaraes rosa']

livro = ['a arte da guerra','poesias selecionadas','a montanha magica','primeiras estorias']

ano = [2000,2004,2015,2017]

dados = {'Autor':autor,'Livro':livro,'Ano':ano}

#autores = pd.DataFrame(dados)
#type(autores)

#df = pd.DataFrame(dados)

#print(df)

#df.to_csv("autores.csv")   transformar em csv

autores = pd.read_csv("autores.csv",index_col=0)
#print(autores)

#print(autores.info())

#print("\n", autores.columns) #nao e funcao

autores.index

autores.describe
# %%
