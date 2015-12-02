#include<iostream>
using namespace std;

class Box
{
 public:
  double length;
  double breadth;
  double heigth;
};

int main()
{
 Box Box1; //Declare Box1 of Box
 Box Box2; //Declare Box2 of Box
 double volume = 0.0;

 //Box 1 specification
 Box1.heigth = 5.0;
 Box1.breadth = 7.0;
 Box1.length=6.0;

  //Box 2 specification
 Box2.heigth = 10.0;
 Box2.breadth = 13.0;
 Box2.length=12.0;

 //Voliume of box 1

 volume = Box1.heigth * Box1.length * Box1.breadth;
 cout<<"Volume of Box1 : " << volume<<endl;

 //Volume of box 2
 volume = Box2.heigth * Box2.length * Box2.breadth;
 cout<<"Volume of Box2 : "<<volume<<endl;
return 0;

}
