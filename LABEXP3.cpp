#include<iostream>
using namespace std;
class HYDROGEN;
class SULPHUR;
class OXYGEN
{public:
	int nmol_oxy;
	int getdata()
	{
		cout<<"Enter number of molecules of OXYGEN you want in resultant compound";
		cin>>nmol_oxy;
	}
	friend int result_com(OXYGEN,SULPHUR,HYDROGEN);
}o;
class SULPHUR
{public:
	int nmol_sul;
	int getdata()
	{
		cout<<"Enter number of molecules of SULPHUR you want in resultant compound";
		cin>>nmol_sul;
	}
	friend int result_com(OXYGEN,SULPHUR,HYDROGEN);
}s;
class HYDROGEN
{public:
	int nmol_hyd;
	int getdata()
	{
		cout<<"Enter number of molecules of HYDROGEN you want in resultant compound";
		cin>>nmol_hyd;
	}
	friend int result_com(OXYGEN,SULPHUR,HYDROGEN);
	}h;
 int result_com(OXYGEN o,SULPHUR s,HYDROGEN h)
 {
 	cout<<"The resultant compound is \t";
 	cout<<"H"<<h.nmol_hyd<<"O"<<o.nmol_oxy<<"S"<<s.nmol_sul<<endl;
 }
 
 int main()
 {
 	o.getdata();
 	s.getdata();
 	h.getdata();
 	
 	result_com(o,s,h);
 	return 0;
 }
 
