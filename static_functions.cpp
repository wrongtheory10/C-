#include<iostream>
using namespace std;

class X
{
 public:
 void f(){cout<<"Function f"<<endl;};
};

int main()
{
X obj;
obj.f(); //calling memner function directly with class name
}
