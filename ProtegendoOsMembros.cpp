#include <iostream>
#include <string.h>

using namespace std;

class Linguagem
{
  friend class LinguagemAmiga;
  friend void ClasseAmiga(Linguagem*);

protected:
  string nome;

public:
   void setNome(string nome)
   {
     this->nome = nome;
   }

   string getNome()
   {
     return nome;
   }
};

void ClasseAmiga(Linguagem* l)
{
  cout << endl << "Classe amiga diz: " << l->nome;
}

int main()
{
  Linguagem l;

  l.setNome("C++");
  cout << endl << l.getNome();

  ClasseAmiga(&l);

  return 0;
}
