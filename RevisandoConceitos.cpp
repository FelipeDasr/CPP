#include <iostream>

using namespace std;

class pessoa
{
private:
  int idade;
  int * vet;
public:
  pessoa(int idade)
  {
    this->idade = idade;
    vet = new int[10];
  }
  ~pessoa()
  {
    delete [] vet;
  }
  int obteridade()
  {
    return idade;
  }
};

int main()
{

  pessoa *p = new pessoa(20);
  cout << p->obteridade() << endl;

  delete p;

  return 0;
}
