#include<iostream>
#include<string>
using namespace std;

int main()
{
 string str1 = "Hello";
 string str2 = "world";
 string str3;
 int len;

 //copy str1 into str3
 str3 = str1;
 cout<<"str3 : "<<str3<<endl;

 //concatenate str1 and str3
 str3 = str1 + str2;
 cout<<"str1 + str2 : "<<str3<<endl;

 //total lenght of str3 after concatenation
 len=str3.size();
 cout<<"str3.size() : "<<len<<endl;

 int a[4]={1,2,3,4};

 for(int i=0;i<4;i++)
   cout<<a[i]<<endl;

return 0;
}
