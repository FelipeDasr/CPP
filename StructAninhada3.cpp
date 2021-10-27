#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

typedef struct Universidade
{
  string nome;
}t_universidade;

typedef struct Aluno
{
  string nome;
  t_universidade universidade;
}t_aluno;

int main()
{
    t_aluno  aluno = {"Marcos", {"UFPI"}};
    t_aluno * ptr_aluno;

    ptr_aluno = &aluno;

    cout << setw(20) << "Aluno: " << setw(20) << "universidade" << endl;
    cout << setw(20) << ptr_aluno->nome << setw(20) << ptr_aluno->universidade.nome << endl;

    return 0;
}
