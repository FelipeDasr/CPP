#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef struct People
{
  private:
    string name;
    int age;

  public:
    void setName()
    {
      string SetName;
      cout << "Enter the user name: ";
      getline(cin, SetName);
      this->name = SetName;
    }

    string getName()
    {
      return this->name;
    }

    void setAge()
    {
      int SetAge;
      cout << "Enter the users age: ";
      cin >> SetAge;
      this->age = SetAge;
    }

    int getAge()
    {
      return this->age;
    }
}People;

int main()
{

  People user;

  user.setName();
  user.setAge();

  cout << endl << "USER NAME: " << user.getName();
  cout << endl << "USER AGE : " << user.getAge();

  cout << endl;
  for(int i = 0; i < 50; i++) cout << "=";

  cout << endl << endl << "Press enter to continue...";
  setbuf(stdin, 0); getchar();
}
