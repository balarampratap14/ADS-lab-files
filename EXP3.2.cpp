
#include<iostream>
#include<stdlib.h>
using namespace std;
 

 
class Rectangle: public Shape
{
  public:
   int calculate_area ()
    {
    	cout<<width;
        return (width * length);
    }
};
class Triangle: public Shape
 {
 public:
   int calculate_area ()
    {
        return (base*height);
    }
};
 
int main ()
{ Shape s;
Rectangle r;Triangle t;
	int k;
s.set_data_triangle(1, 5);
s.set_data_rectangle(2, 5);

   
   cout<<r.calculate_area()<<endl;
     cout<<t.calculate_area()<<endl;
    

    return 0;
}
