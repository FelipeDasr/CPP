#include <iostream>
#include <string>

using namespace std;

typedef struct Curso
{
  string nome;
  double preco;
} t_curso;

typedef struct Estudante
{
  string nome;
  Curso curso;
}t_estudante;

int main()
{
  t_estudante e;

  e.nome.assign("Felipe");
  e.curso.nome.assign("C++ para iniciantes");
  e.curso.preco = 10;

  cout << "Nome da pessoa: " << e.nome << endl;
  cout << "Curso: " << e.curso.nome << endl;
  cout << "Preco do curso: " << e.curso.preco << endl;

  return 0;
}
