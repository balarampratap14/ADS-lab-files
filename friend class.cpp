#include <iostream>
using namespace std;
class ONE;

class TWO
{
public:
  void print(ONE & x);
};

class ONE
{
  int a, b;
  friend void TWO::print(ONE& x);
public:
  ONE() : a(1), b(2) { }
};

void TWO::print(ONE& x)
{
  cout << "a is " << x.a << endl;
  cout << "b is " << x.b << endl;
}

int main()
{
  ONE xobj;
  TWO yobj;
  yobj.print(xobj);
}

