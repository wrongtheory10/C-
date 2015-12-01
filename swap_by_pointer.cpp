#include<iostream>
using namespace std;

void swap(int *x,int *y);


main(){

int a=100;
int b=200;

cout <<"Before a= "<<a<<endl;
cout <<"Before b= "<<b<<endl;

swap(&a,&b);

cout<<"After a="<<a<<endl;
cout<<"After b="<<b<<endl;

return 0;
}

void swap(int *x,int *y)
{
 int tmp;
 tmp=*x;
 *x=*y;
 *y=tmp;
return;
}
