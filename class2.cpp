#include<iostream>
using namespace std;

class Box
{
 public:
  double length;
  double breadth;
  double heigth;

//member functions declaration
 double getVolume(void);
 void setLength(double len);
 void setBreadth(double bre);
 void setHeigth(double hei);
};

//Member fucntions definitions
 double Box::getVolume(void)
{
 return length * breadth * heigth;
}

void Box::setLength(double len)
{
 length=len;
}

void Box::setBreadth(double bre)
{
 breadth = bre;
}

void Box::setHeigth(double hei)
{
 heigth = hei;
}

//main fucntion

int main()
{
Box Box1;
Box Box2;
double volume=0.0;

//box1
Box1.setLength(6.0);
Box1.setBreadth(7.0);
Box1.setHeigth(5.0);

//box2
Box2.setLength(12.0);
Box2.setBreadth(13.0);
Box2.setHeigth(10.0);

//volume of box 1
volume = Box1.getVolume();
cout<<"Volume of box1 : " << volume<<endl;

//volume of box2
volume = Box2.getVolume();
cout<<"Volume of box 2 : " << volume <<endl;

return 0;
}


