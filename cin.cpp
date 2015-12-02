#include<iostream>
using  namespace std;


int main()
{

char name[20];
cout<<"Enter your name: ";

cin>>name;
cout<<"Your name is "<<name<<endl;

char str[] = "Unable to read...";
cerr<<"Error message: "<<str<<endl;

char str2[] = "Unable to read again...";
clog << "Error : " << str2 <<endl;

return 0;
}
