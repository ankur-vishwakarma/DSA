#include <iostream>
using namespace std;
class a1
{
	int a,b;
	public:
	void getdata(int m,int n)
	{
	a=m;
	b=n;
	}
	void display()
	{
	cout<<"a="<<a<<"  b="<<b;
	}
};
class b1
{
	int c,d;
	public:
	void getdata(int p,int q)
	{
	c=p;
	d=q;
	}
	void display()
	{
	cout<<"c="<<c<<"  d="<<d;
	}
};
class c1
{
	int e,f;
	b1 b2;
	a1 a2;
	public:
	void getdata(int r,int s)
	{
	e=r;
	f=s;
	a2.getdata(1,2);
	b2.getdata(3,4);
	}
	void display()
	{
	cout<<"e="<<e<<"  f="<<f;
	b2.display();
	     a2.display();
	}
	   
};
int main()
{
	c1 c3;
	c3.getdata(2,3);
	c3.display();
	return 0;
}
