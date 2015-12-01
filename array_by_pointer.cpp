#include<iostream>
using namespace std;

int main()
{
double balance[5]={1.0,2.0,3.0,4.0,5.0};
double *p; //pointer

p=balance;

cout<<"Array values using pointer: "<<endl;
for(int i=0;i<5;i++)
{
 cout<<"*(p + "<<i<<") : ";
 cout<<*(p+i)<<endl;
}

cout<<"Array values using balance as address "<<endl;
for(int i=0;i<5;i++)
{
cout<<"*(balance + "<<i<<") : ";
cout<<*(balance+i)<<endl;
}
}
