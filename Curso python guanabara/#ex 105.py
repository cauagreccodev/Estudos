#ex 105
def notas(*notas, sit=False):
    """
    --> Faz uma media das notas da sala, calcula sua media e diz sua situacao

    BOA: maior que 7
    RAZOÁVEL: entre 6 e 7
    RUIM: Menor que 6 

    """
    
    dic={}

    dic['total']= len(notas)
    dic['maximo']= max(notas)
    dic['minimo']= min(notas)
    dic['media']=sum(notas)/len(notas)
    if sit:
        if dic['media']>=7:
            dic['situacao'] = ('BOA')
        elif dic['media']==6 and dic['media']<=6.9:
            dic['situacao'] = ('RAZOÁVEL')
        elif dic['media']<6:
            dic['situacao'] = ('RUIM')
    
    return dic
    
help (notas)    
alunos = notas(3,4,2,sit=True)
print (alunos)


