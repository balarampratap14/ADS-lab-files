#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
 
class queue
{public:
	int a[10],i;
	int front=0,rear=0;
	void ins();
	void show()
{
int i,temp=front;
if (front==rear)
cout<<"the queue is empty";
else
{
cout<<"\n element in the queue:";
for(i=temp;i<rear;i++)
{
cout<<a[i]<<" ";
}
}
}
	void del()
{
	if(front>=rear)
	{
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"deleted element:"<<a[front]<<endl;
		for(i=0;i<rear-1;i++)
		{
			a[i]=a[i+1];
		}
		rear--;
	}
}
}a1;
void queue::ins()
{
	if(rear-1>10)
	{
		cout<<"queue overflow"<<endl;
	}
	else
	{
		int ele;
		cout<<"enter element to insert"<<endl;
		cin>>ele;
		cout<<"inserted element:"<<ele<<endl;
		a[rear]=ele;
		rear++;
	}

	
}
int main()
{
     int ch;
      while(1)
        {
              cout <<"\n1.insert  2.delet  3.display  4.exit\nEnter ur choice";
              cin >>ch;
              switch(ch)
                {
                  case 1: a1.ins();
                  
                   a1.show();
                             break;
                  case 2: a1.del();
                  a1.show();
                             break;
                  
                  }
          }
return (0);
}
