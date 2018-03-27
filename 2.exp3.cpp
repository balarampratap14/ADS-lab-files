#include<iostream>
#include<stdlib.h>
using namespace std;

class shape
{
    protected:
        double b;
        double h;
    public:
        shape(double b1,double h1)
        {
            b=b1;
            h=h1;
        }
        virtual void disp_area()=0;
};

class triangle :public shape
{
    public:
        triangle(double b1, double h1):shape(b1,h1)
        {
        }
        void disp_area();
};

class rectangle:public shape
{
    public:
        rectangle(double b1,double h1):shape(b1,h1)
        {
        }
        void disp_area();
};



void triangle::disp_area()
{
    double a1;
    a1=(b*h)*1/2;
    cout<<"\nTHE AREA OF TRIANGLE IS :"<<a1;
}

void rectangle::disp_area()
{
    double a1;
    a1=b*h;
    cout<<"\nTHE AREA OF RECTANGLE IS :"<<a1;
}

main()
{
	shape *s;
    double b1,h1;
    int x;
    cout<<"ENTER YOUR CHOICE  "<< "\n"<<"1.Triangle  2.Rectangle "<<endl;
    cin>>x;
    switch (x)
   
    {
	case 1:
		{
		cout<<"\n\nPLEASE ENTER THE TRIANGLE DETAILS\n";
    cout<<"BASE         = ";
    cin>>b1;
    cout<<"\nHEIGHT   = ";
    cin>>h1;
   triangle t(b1,h1);
    s=&t;
    s->disp_area();
	break;}
    case 2:{	
    cout<<"\n\nPLEASE ENTER THE RECTANGLE DETAILS\n";
    cout<<"\nLENGTH  = ";
    cin>>b1;
    cout<<"\nBREADTH = ";
    cin>>h1;
	  rectangle r(b1,h1);
    s=&r;
    s->disp_area();
 break;}
}
    return 0;
}
    
