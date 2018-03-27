 #include<iostream>
 using namespace std;

       class BaseClass
       {

              public:

              void Display()
              {
                    cout<<"\n\tThis is Display() method of BaseClass";
              }

              void Show()
              {
                    cout<<"\n\tThis is Show() method of BaseClass";
              }

       };

       class DerivedClass : public BaseClass
       {

              public:

              void Display()			//overriding method - new working of
              {                                         //base class's display method
                    cout<<"\n\tThis is Display() method of DerivedClass";
              }
void Show()
              {
                    cout<<"\n\tThis is Show() method of DerivedClass";
              }
       }d;

       int main()
       {
       	d.BaseClass b::Display();
