#include<iostream>
using namespace std;
class Base{
  
};

int main()
{
  static Base b;

  //Only non-static data
  cout<<"SIZE OF CLASS BASE (without padding) = "<<sizeof(b)<<endl;
  return (0);
}
