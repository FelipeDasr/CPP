#include <iostream>

using namespace std;

int gerarID()
{
  static int id = 0;
  return id++;
}

int main()
{

  string pessoa;

  while(true)
  {
    cout << "Digite o nome da pessoa: ";
    cin >> pessoa;
    cout << "ID gerado para " << pessoa << ": " << gerarID() << endl << endl;
  }

  return 0;
}
