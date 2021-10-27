#include <iostream>

using namespace std;

class Vetor
{
private:
  int *vet, *vet_pos;
  int max;
public:
  Vetor(int max = 100)
  {
    if(max < 0)
    {
      cerr << "Erro: limite maximo menor do que 0." << endl;
      exit(1);
    }
    else if(max > 100)
    {
      cerr << "Erro: limite estrapolado, maximo de 1000000.";
      exit(1);
    }

    this->max = max;
    vet = (int*)malloc(max * sizeof(int));
    vet_pos = (int*)malloc(max * sizeof(int));

    for(int i = 0; i < max; i++)
    {
      vet_pos[i] = 0;
    }
  }
  ~Vetor()
  {
    delete [] vet;
  }

  bool inserir (int e, int pos)
  {
    if(pos < max && pos >= 0)
    {
      vet[pos] = e;
      vet_pos[pos] = 1;
      return true;
    }
    return false;
  }
  int& operator[](int i)
  {
    if(i < 0 or i >= max)
    {
      cerr << "Erro: acesso invalido ao vetor.\n";
    }
    else if(vet_pos[i] == 0)
    {
      cerr << "Erro nessa posicao nao existe elemento!!";
    }
    else
    {
      return vet[i];
    }
  }
  int tam()
  {
    int cont = 0;

    for(int i = 0; i < max; i++)
    {
      if(vet_pos[i] == 1)
        cont++;
    }
    returb cont;
  }
};

int main()
{

  Vetor v(10);

  if(v.inserir(10, 0))
    cout << "Inserido\n";
  else
    cout << "Erro\n";
  if(v.inserir(11, 2))
    cout << "Inserido\n";
  else
    cout << "Erro\n";
  if(v.inserir(12, 10))
    cout << "Inserido\n";
  else
    cout << "Erro\n";

  cout << "Primeiro elemento: " << v[0] << endl;
  cout << "Segundo elemento: "  << v[1] << endl;
  cout << "Terceiro elemento: " << v[2] << endl;

  return 0;
}
