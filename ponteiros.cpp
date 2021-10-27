#include <iostream>
#include <new>

using namespace std;

int main()
{
  int Tam;

  cout<<"Digite o tamanho do vetor: ";
  cin>>Tam;

  int *Vet = new int [Tam];

  for(int i = 0; i < Tam; i++)
  {
    cout<<"\nDigite um numero para o vetor: ";
    cin>>Vet[i];
  }

  delete[] Vet; //limpando oque alocamos
  Vet = NULL;
  
  return 0;
}
