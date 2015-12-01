#include <iostream>
using namespace std;
int xxx=10;
int yyy;
//namespace a
namespace a
{
 int b=5;
}

//namespace c
namespace c
{
 int d=6;
}

//function func()
int func();

//main() is where program execution begins.
int main()
{
 std::cout<<"Hello World" <<endl; //prints Hello World
 int xxx=20;
 int yyy;
 cout<<"Local yyy: "<<yyy<<endl;
 cout<<"Global yyy:"<<::yyy<<endl;
 cout <<::xxx<<endl;
 //function call
 int i=func();
 cout<<i<<endl;
 using namespace c;
 typedef int hz;
 hz number;
 number =10;
 std::cout<<endl<<number<<endl;
 enum color {red,green,blue} c;
 c=blue;
 std::cout <<endl<<green<<endl;
 switch(c)
	{
	 case red :  std::cout<<"red"<<endl; break;
	 case green:  std::cout<<"green"<<endl; break;
	 case blue:  std::cout<<"blue"<<endl; break;
	}
 cout<<a::b<<endl;
 cout<<d<<endl;

 return 0;
}

//function definition
int func()
 {
        return 100;
 }

