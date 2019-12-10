#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     setlocale(LC_ALL, "Russian");
	   int a, b, c, p;
     cout<<"Введите точки"<<endl;
	   cin >> a >> b >> c; 
     p=abs(c-a)*abs(c-b);
	   cout<<"Произведение="<<p<<endl;
     return 0;
}

