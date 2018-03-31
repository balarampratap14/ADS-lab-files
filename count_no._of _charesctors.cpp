#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;char data[100];
int c=0;
ofstream outfile;
   outfile.open("marks.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.get(data, 100);
   outfile<<data;
   outfile.close();
ifstream fin;
fin.open("marks.dat",ios::in);
while(fin)
{
fin.get(ch);
c++;
}
cout<<"total number of characters in file are :"<<c;
fin.close();
return 0;
}
