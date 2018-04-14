#include<iostream>
using namespace std;
void push(char);
void pop();
void display();
int i,n,choice=0;
 char a[100];
int top=-1;
int main()
{
    cout<<" \n STACK OPERATIONS USING ARRAY";
    cout<<endl;
    cout<<endl;
    cout<<"Enter no. of space u want in stack"<<endl;
    cin>>n;

    cout<<"\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT"<<endl;
    do
    {
	cout<<"Enter your choice:"<<endl;
        cin>>choice;
    	
    	
        switch(choice)
        {
            case 1:
            {
            	int g;
            	cout<<"enter a character u want to store in stack"<<endl;
            	cin>>g;
                push(g);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<" EXIT POINT ";
                break;
            }
            default:
            {
               cout<<" Please Enter a Valid Choice(1/2/3/4)";
            }
                 
        }
    }
    while(choice!=4);
}
void push(char p)
{
    if(top>=n-1)
    {
        cout<<"Stack is over flown"<<endl;
         
    }
    else
    {
        top++;
        a[top]=p;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        cout<<" The popped elements is"<<a[top];
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        for(i=top; i>=0; i--)
            cout<<a[i];
    }
    else
    {
        cout<<"STACK is empty";
    }
    
}
