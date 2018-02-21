#include<iostream> 
using namespace std;
 
int x=5;  // Global x
 
int main()
{
  int x; // Local x
  cout << "Value of global x is " << ::x;
  cout << "\nValue of local x is " << x;  
  return 0;
}
