#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};
 
class Faculty : public Person {
public:
    Faculty(int x)   :Person(x)
{
	        cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 

 
int main()  {
    Faculty ta1(30);
}
