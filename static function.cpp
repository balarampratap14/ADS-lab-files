#include<iostream>
using namespace std;
class X
{
 public:
 static void f(int p){
 cout<<p;};
};

int main()
{
 X::f(9);   // calling member function directly with class name
}

