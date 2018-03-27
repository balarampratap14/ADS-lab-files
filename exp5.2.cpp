#include <iostream>
#include <conio.h>
using namespace std;

template<class t1>
void sort(t1 *a[4])
{
	int i,b[4],temp,j;
int i,temp,j;

for(i=0;i<=4;i++)
 {
 for(j=0;j<=4-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
}

int main()
{
    int i,b[4],temp,j;
    char c[4];
    double d[4];
 cout<<"Enter any 4 integer num in array: \n";
 for(i=0;i<=4;i++)
 {
 cin>>b[i];
 }
 
sort(&b[4]);

}
