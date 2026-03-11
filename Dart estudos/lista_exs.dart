//ex1

void main() {
  var faturas = [150.0, 300.50, 45.0, 1000.0];
  
  var faturas_maior_que_100 = faturas.where((faturas) => faturas > 100);
  
  var lista_maior_100 = faturas_maior_que_100.toList();
  
  print(lista_maior_100);
}
 //usei IA para direcionamento no dart

//ex2

void main(){
  
  String dadosfuncionario = 'Funcionario:Marcos;Cargo:Desenvolvedor;Salario:5000';
  
  List<String> lista_categorias =  dadosfuncionario.split(';');
    
  Map<String,String> meumap = {};
  
  for(String categorias in lista_categorias){
    
    List<String> func_cargo_salario = lista_categorias = categorias.split(':');
    
    String chave = func_cargo_salario[0];
    String valor = func_cargo_salario[1];
    
    meumap[chave] = valor;
  }
  print(meumap['Salario']);
}

//ex 3:

void main(){
  DateTime vencimento = DateTime.parse('2023-10-01');
  DateTime pagamento = DateTime.parse('2023-10-05');
  
  if(pagamento.isAfter(vencimento)){
    print('Boleto pago com atraso!!!');
    int diasvencimento = pagamento.difference(vencimento).inDays;
    print('Dias de atraso = $diasvencimento');
  }else{
    print('Boleto pago no prazo!!!');
  }
}

//ex 4: 

void main(){
  List<double> precos = [10.5, 20.0, 30.0];
  
  precos.add(45.9);
  precos.remove(precos[0]);
  
  List <double> precos_com_desconto = precos.map((precos){
    return precos *0.9;
  }).toList(); 
  print('precos $precos');
  print('precos com desconto $precos_com_desconto');
}

//ex 5:

void criarUsuario({required String nome, String cargo = "Estagiário"}){
  print('Boas vindas! $cargo: $nome');
} 

void main(){
  criarUsuario(nome:'Cauã');
}

//ex 6:

void main(){
  String? usuariologado = null; 
  
  String nome = usuariologado?? "Visitante";
  
  int? tamanho = usuariologado?.length;
  
  print('Usuario: $nome, bem vindo $nome');
  print('Usuario tem $tamanho letras');
}