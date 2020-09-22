#include<iostream>
#include<math.h>
#define e 2.6733
#define pi 3.14159
using namespace std;
float f(float x)
{
float fv=pow(x,3)-4*x-9; //CHANGE FUNCTION HERE
return fv;
}
main()
{
int i,n=1;
float a=0,b=0,x=0,y=0;
while(a==0||b==0)
{
float F=f(x);
if(F<0&&a==0) a=x;
else if(F>0&&b==0) b=x;
//BEST ALGORITHM
if(x<=0) x+=n;
else x-=n;
n++;
}
//cout<<a<<" "<<b;
x=(a+b)/2;
float fx=f(x);
y=fx;
do{
fx=y;
if(fx<0) a=x;
else b=x;
x=(a+b)/2;
y=f(x);
}while(y!=fx);
cout<<"x="<<x<<"\nf(x)="<<fx;
}
