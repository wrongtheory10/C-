#include<iostream>
#include<ctime>
using namespace std;

//function declaration
 double getAverage(int *arr,int *size);

int main()
{
 //an int array with 5 elements
 int balance[5] = {1000,2,3,17,50};
 double avg;
  int *ptr;
  ptr=balance;
 int size=5;
 //pass pointer to the array as an argument
 avg = getAverage(ptr,&size);

 //output the returned value
 cout<<"Average value is: "<<avg<<endl;
return 0;
}


double getAverage(int *arr, int *size)
{
 int i,sum=0;
 double avg;

 for(i=0; i<*size; i++)
  sum+=arr[i];
avg=double(sum)/(*size);
return avg;
}
