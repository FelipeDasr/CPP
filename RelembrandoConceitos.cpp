#include <iostream>

using namespace std;

class Classbase
{
protected:
  int n1, n2;
public:
  int n3, n4;

  Classbase()
  {
      n1 = 1;
      n2 = 2;
      n3 = 3;
      n4 = 4;
  }
};

class Subclasse : public Classbase
{
public:
  void foo()
  {
    cout << "SubClasse1: " << endl;
    cout << endl << n1 << endl;
    cout << n2 << endl << n3 << endl << n4 << endl;
  }
};

int main()
{
  return 0;

}
