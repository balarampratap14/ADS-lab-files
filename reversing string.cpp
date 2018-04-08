 #include<iostream>
 #include<string.h>
 using namespace std;
 int main()
 {
 int k=0;
 char str[80],w[80];
 cout<<"Enter a string /sentence which you wanted to see it in reverse order";
 cin.getline(str,80);
 int r=strlen(str);
 cout<<"string length\t"<<r<<endl;
 strcat(str," ");
 for(int i=0;str[i]!='\0';i++)
 {
 if(str[i]!=' ')
 {
 w[k]=str[i];
 k=k+1;
 }
 else
 {
 while(k>0)
 {
 cout<<w[--k];
 }
 cout<<str[i];
 }
 }
 return 0;
 }
 
 int j=25;
