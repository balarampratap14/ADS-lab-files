#include <iostream>
using namespace std;
 
class Shape
{
  protected:
    double width, height;
  public:
    void set_data (double a, double b)
    {
        width = a;
        height = b;
    }
    double area()
    {return 0;}
};
 
class Rectangle: public Shape
{
  public:
    double area ()
    {
        return (width * height);
    }
};
 
int main ()
{
    Shape sPtr;
    Rectangle rect;
    
    rect.set_data (5,3);
    cout << rect.area() << endl;
 
    return 0;
}
