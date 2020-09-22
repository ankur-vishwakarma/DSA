#include<iostream>
using namespace std;
main()
{
	int n,m;
	cin>>n>>m;
	int a,b,count=0,flag=1;
	float f,v,g;
	if(n>m) v=n;
	else v=m;
	for(a=0;a<=v;a++)
	{
		for(b=0;b<=v;b++)
		{
			f=a*a+b,g=a+b*b;
			if(f==m&&g==n) count++;
			if(f>m&&g>n) break;
		}
	}
	cout<<count;
}
