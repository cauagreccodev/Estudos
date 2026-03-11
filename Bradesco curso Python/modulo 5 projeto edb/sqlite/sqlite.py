import sqlite3

con = sqlite3.connect("modulo 5 projeto edb/banco.db")

cur = con.cursor()

cur.execute("CREATE TABLE contato(nome,endereco,telefone)")

con.commit()

print("\n tabela criada com sucesso!!!")