#include <iostream>
using namespace std;

void mensagem(int n)
{
  cout<<endl<<"Numero: "<<n;
}

void mensagem(char n)
{
  cout<<endl<<"Caractere: "<<n;
}

int soma(int n1, int n2)
{
  return n1+n2;
}

int soma(int n1, int n2, int n3)
{
  return n1+n2+n3;
}

int main()
{

  mensagem(44);
  mensagem('A');

  cout<<endl<<soma(3,6)<<endl;
  cout<<soma(4,6,7)<<endl;

}
