#include<iostream>
using namespace std;
class Person {
public:
	void sum()
	{
		cout<<"hi";
	}
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }
};
 
class Faculty : public Person {
public:
	void sum()
	{
		cout<<"hello";
	}
    Faculty(int x)   :Person()
{
	        cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};

 
int main()  {
    Faculty ta1(30);
}
