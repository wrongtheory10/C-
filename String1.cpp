#include<iostream>
#include<cstring>
using namespace std;

main()
{
 char greeting[6]={'H','e','l','l','o','\0'};
 char str[8]="message";
cout <<"Greeting message: ";
cout<< greeting<<endl;
cout<<strstr(greeting,str);
cout<<endl;
//return 0;
}
