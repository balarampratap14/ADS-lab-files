#include <iostream>
using namespace std;

template<class t1>
void sort(t1 *a)
{
	int i,j; t1 temp;

for(j=0;j<3;j++)
 {
 for(i=0;i<3-j;i++)
 {
 if(a[i]>a[i+1])
 {
 temp=a[i];
 a[i]=a[i+1];
 a[i+1]=temp;
 }
 }
}
 for(j=0;j<=3;j++)
 {
 cout<<a[j];
 }
}

int main()
{
    int i,b[4],temp,j;
    char c[4];
    double d[4];
 cout<<"Enter any 4 integer num in array: \n";
 for(i=0;i<=3;i++)
 {
 cin>>b[i];
 }
sort(b);
cout<<"Soretd elements :";
}
