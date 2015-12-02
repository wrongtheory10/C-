#include<iostream>
using namespace std;

class A
{
   public: 
     A()
    {
       cout<<"I'm a A constructor"<<endl;
    }

        ~A(){cout<<"I'm a destructor"<<endl;}
};


int main()
{

cout<<"Main"<<endl;
A a;
return 0;
}
