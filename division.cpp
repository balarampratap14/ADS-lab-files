#include<iostream>
using namespace std;
int main()
{
	int num,i;
    cout<<"\n enter the number";
    cin>>num;
    cout<<"\n the divisors are :";
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
            cout<< "\n"<< i<<endl;;;
    }
    cout<<"now lets move on to some division stuff"<<endl;
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;
    return 0;
}
