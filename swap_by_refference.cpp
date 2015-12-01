#include<iostream>
using namespace std;

void swap(int &a,int &b);

main()
{
 int a=100;
 int b=200;
 
 cout<<"Before a= "<<a<<endl;
 cout<<"Before b= "<<b<<endl;

swap(a,b);

  cout<<"After a= "<<a<<endl;
  cout<<"After b= "<<b<<endl;

return 0;
}


void swap(int &a, int &b)
{

int temp;
 temp=a;
 a=b;
 b=temp;
}
