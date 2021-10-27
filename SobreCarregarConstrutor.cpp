#include <iostream>

using namespace std;

class Carro
{
public:
  int ano;
  string nome;

  Carro()
  {
    ano = 0;
  }
  Carro(int ano)
  {
    this->ano = ano;
  }
};

int main()
{

  Carro carro;
  Carro carro2(2014);

  cout << endl << "Ano carro contrutor 1: " << carro.ano;

  cout << endl << "Ano carro contrutor 2: " << carro2.ano;

  return 0;
}
