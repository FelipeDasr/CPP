#include <iostream>
using namespace std;

typedef struct Pessoa
{
  string nome;
  int idade;
  double peso, altura;
}t_pessoa;

double& Calcular_imc(t_pessoa & pessoa)
{
  double result = pessoa.peso / (pessoa.altura * pessoa.altura);
  double& imc = result;

  return imc;
}

int main()
{

  t_pessoa pessoa = {"Joao", 20, 92.45, 1.75};

  cout << "IMC: " << Calcular_imc(pessoa) << endl;

  return 0;
}
