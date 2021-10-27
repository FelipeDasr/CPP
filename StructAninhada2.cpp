#include <iostream>
#include <string>

using namespace std;

typedef struct pessoa{

  struct carro
  {
    double preco;
  };

  struct casa
  {
      double preco;
  };

  struct carro Carro;
  struct casa Casa;

}t_pessoa;

int main()
{

  t_pessoa pessoa;

  pessoa.Carro.preco = 35000;
  pessoa.Casa.preco = 55000;

  cout << "Preco carro: " << pessoa.Carro.preco << endl;
  cout << "Preco casa: " << pessoa.Casa.preco << endl;

  return 0;
}
