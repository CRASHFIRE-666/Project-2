#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Введите координаты точек"<<endl;
    int x1,x2,x3,y1,y2,y3;
    float s,p,a,b,c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    p=a+b+c;
    s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    cout<<"S="<<s<<", P="<<p;
    return 0;
}

