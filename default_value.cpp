#include<iostream>
using namespace std;

int sum(int a, int b=20);

int main()
{
int a=100;
int b=200;
int result;

//---------
result = sum(a,b);
cout<<result<<endl;


//-------------
result=sum(a);
cout<<result<<endl;
}

int sum(int a,int b)
{

return a+b;

}
