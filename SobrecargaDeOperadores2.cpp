#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
private:
  string nome;
  int id;
public:

  void inicializar(string novoNome, int novoId)
  {
    nome.replace(0, nome.size(), novoNome);
    id = novoId;
  }

  Pessoa(string novoNome, int novoId)
  {
    //nome.replace(0, nome.size(), novoNome);
    //id = novoId;

    inicializar(novoNome, novoId);
  }

  Pessoa(Pessoa& p)
  {
    inicializar(p.nome, p.id);
  }

  Pessoa& operator=(Pessoa& p)
  {
    if(this != &p)
    {
      inicializar(p.nome, p.id);
    }

    return *this;
  }

  string getNome()
  {
    return nome;
  }
  int getId()
  {
    return id;
  }

  void mudarNome(char c)
  {
    nome[0] = c;
  }
};

int main()
{

  Pessoa p1("Felipe", 1), p2("pedro", 2);

  p1 = p2;

  p1.mudarNome('C');

  cout << "Nome: " << p1.getNome() << endl << "ID: " << p1.getId() << endl;
  cout << "Nome: " << p2.getNome() << endl << "ID: " << p2.getId() << endl;

  return 0;
}
