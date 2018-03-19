#include<iostream>
using namespace std;
class Person {

    Person(int x)  { cout << "Person::Person(int  ) called" << endl;   }
    
};
class Faculty : virtual public Person {
public:
    Faculty(int x)
	   {
	   	Person(x);
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 int main()  {
  Faculty F1(30);
}
