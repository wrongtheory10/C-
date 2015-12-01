#include<iostream>
using namespace std;


int main()
{

int tab[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};
int *tab2 = new int[5];

for(int i=0;i<5;i++){
  for(int j=0;j<2;j++){
   //tab2[i][j]=i*j;

   cout<<"tab["<< i <<"]["<< j <<"]: ";
   cout<< tab[i][j]<< endl;
   }

}

return 0;
}
