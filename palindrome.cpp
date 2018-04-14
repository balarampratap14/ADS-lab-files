                    //Program to check whether the string is Palindrome or not
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int flag,i,j;
char str[50];
cout<<"Enter the string"<<endl;
cin.getline(str,50);
int l=0;
l=strlen(str);
cout<<l<<endl;
for( i=0;i<l;i++)
{
	j=l-i;
if(str[i]!=str[j-1])
{
flag=0;
break;
}
}
if(flag=0)
cout<<"The given string is not a palindrome"<<endl;
else
cout<<"The string is a palindrome"<<endl;
return 0;
}  
