#include <iostream>
#include <math.h>
using namespace std;

int main()
{
setlocale( LC_ALL,"Russian" );
float x1,x2,y1,y2,p;
cout<<"Введите первую точку"<<endl;
cin>>x1>>y1;
cout<<"Введите вторую точку"<<endl;
cin>>x2>>y2;
p=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
cout<<"Расстояние="<<p<<endl;
return 0;
}
