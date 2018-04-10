#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream fout;
 ifstream fin;
 int i=0;
 int n;
 char ch[20];
 fout.open("a.txt");
 cout<<"enter no. of lines";
 cin>>n;
 cout<<"\nenter contents to first file\n\n";
 do
 {
  cin.getline(ch,20);
  fout<<ch;
  fout<<"\n";
  i++;
 }while(i<=n);
 fout.close();
 fin.open("a.txt");
 while(fin.eof()==0)
 {
 fin.getline(ch,20);
 cout<<ch;
 cout<<"\n";
 }
 fin.close();
}
