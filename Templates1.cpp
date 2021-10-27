#include <iostream>

using namespace std;

template<typename t> t soma(t n1, t n2)
{
  return n1 + n2;
}

int main()
{

    cout << "Soma de inteiros: " << soma(5, 8) << endl;
    cout << "Soma de reais: " << soma(1.5, 7.3) << endl;

    return 0;
}
