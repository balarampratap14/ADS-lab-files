#include<iostream>
using namespace std;
class Person 
{protected:
	int a=20;
public:
    void Per(int x) 
	 { cout << "Person::Person(int  ) called" << endl;   }
    
};
class Faculty : virtual public Person {
public:
    Faculty(int x)
	   {
	   	cout<<a;
	   	Per(x);
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 int main()  {
  Faculty F1(30);
}
