#ex 72
cont=("zero","um","dois","tres","quatro","cinco","seis","sete", "oito","nove","dez","onze","doze","treze","quatorze","quinze","dezesseis","dezessete","dezoito",
      "dezenove","vinte")
while True:
    num=int(input('digite um valor entre 0 a 20 '))
    if 0 <= num <=20:
        break
    print('tente novamente')
print(f'O valor obtido em extenso é {cont[num]}')    