#include<iostream>
using namespace std;

void counter()
{
 static int count;
 cout<<count++<<endl;
}

int main()
{
  for(int i=0;i<5;i++)
      counter();
}
