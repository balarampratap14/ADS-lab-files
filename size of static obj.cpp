#include<iostream>
using namespace std;
class Abc
{
 int i;
 char b;
 public:
 
 Abc()
 {
  cout << "constructor";
 }
 ~Abc()
 {
   cout << "destructor";
 

void main_test()
{
   static Abc obj;
}
};
int main()
{
  int x=0;
  if(x=0)
  {
   main_test();
}
  cout <<sizeof(obj);
   cout <<"END";  
  return 0;
}
