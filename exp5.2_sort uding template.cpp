#include <iostream>
using namespace std;
template <class X> 
void bubble( X *items, int count) 
{
 int a, b;
X t;
for(a=0; a<count; a++)                                                                
for(b=0; b<count-a; b++)
if(items[b] > items[b+1]) 
{
t = items[b];
items[b] = items[b+1];
items[b+1] = t;
}
}
int main()
{int i;
int iarray[7];
cout<<"Enter 7 integer values in array"<<endl;
for(i=0;i<=6;i++)
{
	cin>>iarray[i];
}
double darray[5];
cout<<"Enter 7 double values in array"<<endl;
for(i=0;i<=4;i++)
{
	cin>>darray[i];
}
char carray[6];
cout<<"Enter 7 char values in array"<<endl;
for(i=0;i<=5;i++)
{
	cin>>carray[i];
}
cout << "Here is unsorted integer array: ";
for(i=0; i<7; i++)
cout << iarray[i] << ' ';
cout << endl;
cout << "Here is unsorted double array: ";
for(i=0; i<5; i++)
cout << darray[i] << ' ';
cout << endl;
cout << "Here is unsorted char array: ";
for(i=0; i<6; i++)
cout << carray[i] << ' ';
cout << endl;
bubble(iarray, 7);
bubble(darray, 5);
bubble(carray, 6);
cout << "Here is sorted integer array: ";
for(i=0; i<7; i++)
cout << iarray[i] << ' ';
cout << endl;
cout << "Here is sorted double array: ";
for(i=0; i<5; i++)
cout << darray[i] << ' ';
cout << endl;
cout << "Here is sorted char array: ";
for(i=0; i<6; i++)
cout << carray[i] << ' ';
cout << endl;
return 0;
}
