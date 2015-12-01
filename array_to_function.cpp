#include<iostream>
using namespace std;




double getAverage(int arr[], int size)
{
 int i,sum=0;
 double avg;

 for(int i=0;i<size;i++)
   sum+=arr[i];
 avg=double(sum)/size;

return avg;
}


int main()
{

int balance[5]={1,2,3,4,5};
 double avg;

 avg=getAverage(balance,5);

 cout<<"Average is "<<avg<<endl;

return 0;
}


