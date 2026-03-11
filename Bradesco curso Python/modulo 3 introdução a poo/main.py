class main:
    pass

print("testando o projeto")

from Cliente import Cliente

from conta import conta

c1 = Cliente("Cauã","(19)99352-5520")
conta = conta(c1.get_nome(),6363,2000)

#print(c1) #id do cliente
#print(c1.nome,"Numero:",c1.telefone)
#print(conta.titular,"Numero da conta: ",conta.numero,"Saldo:",conta.saldo)

conta.deposita(100)
conta.saque(50)
conta.extrato()

