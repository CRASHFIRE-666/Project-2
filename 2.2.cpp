#include <iostream>
#include <math.h>
using namespace std;

int main()
{
setlocale( LC_ALL,"Russian" );
cout<<"Введите координаты точек"<<endl;
int a,b,c,ac,bc,sum;
cin>>a>>b>>c;
ac=abs(a-c);
bc=abs(c-b);
sum=ac+bc;
cout<<"AC="<<ac<<", BC="<<bc<<", Сумма="<<sum<<endl;
return 0;
}
