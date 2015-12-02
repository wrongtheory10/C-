#include<iostream>
using namespace std;

class Line
{
  public:
  double length;
  void setLength(double len);
  double getLength(void);
};

//Member function definistions
double Line::getLength(void)
{
 return length;
}

void Line::setLength(double len)
{
 length = len;
}

//main

int main()
{
 Line line;
//set line length
line.setLength(6.0);
cout<<"Length of line : "<< line.getLength()<<endl;

//set line
line.length = 10.0; //ok because length is public
cout<<"Length of line is :" << line.length<<endl;

return 0;
}

