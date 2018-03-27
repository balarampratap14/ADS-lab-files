#include <iostream>
#include <conio.h>
using namespace std;

template<class t1,class t2>
void product(t1 a,t2 b)
{
    cout<<"Product is ="<<a*b<<endl;
}

int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two integer data: ";
    cin>>a>>b;
    cout<<"Enter two float data: ";
    cin>>x>>y;
    product(a,b); 
    product(x,y); 
    return 0;
}
