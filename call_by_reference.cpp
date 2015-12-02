#include<iostream>
using namespace std;

//function declaration
 void swap(int& x,int& y);

int main()
{
 //local variable declaration
 int a=100;
 int b=200;

 cout<<"Before swap value of a : "<<a<<endl;
 cout<<"Before swap value of b : "<<b<<endl;

 /* Calling a function to swap the values */

 swap(a,b);

 cout<<"After swap value of a :"<<a<<endl;
 cout<<"After swap value of b :"<<b<<endl;

return 0;
}

//function definition to swap the values

void swap(int& x, int& y)
{
 int tmp;
 tmp=x;
 x=y;
 y=tmp;
return;
}
