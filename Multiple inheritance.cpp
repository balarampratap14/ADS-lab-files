#include <iostream>
using namespace std;
 
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
class Car
{
  public:
    Car()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
 
};
class Type: public Vehicle, public Car
{ 
};
 
 int main()
{   
    Car obj;
    return 0;
}
