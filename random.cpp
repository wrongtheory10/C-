#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
 int i,j;
 srand(time(NULL));

 for(i=0;i<10;i++)
 {
    j=rand();
    cout<<"Random number: "<<j<<endl;
 }
}
