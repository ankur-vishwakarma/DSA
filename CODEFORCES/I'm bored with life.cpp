#include<iostream>
using namespace std;
long long fact(int k)
{
	long long f=1;
	while(k!=1)
	{
		f=f*k;
		k--;
	}
	return f;
}
long long gcd(long long p, long long q)
{
	long long temp;
	if(q>p)
	{
		temp=p;
		p=q;
		q=temp;
	}
	if(p%q==0) return q;
	else return gcd(q,p-q);
}
main()
{
	int a,b;
	cin>>a>>b;
	long long x,y;
	x=fact(a);
	y=fact(b);
	long long h=gcd(x,y);
	cout<<h;
}
