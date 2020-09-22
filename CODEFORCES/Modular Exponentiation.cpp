#include<iostream>
using namespace std;
main()
{
	int n,m,t=1;
	cin>>n>>m;
	int a=m,st=1,count=0;
	while(a/2!=0)
	{
		count++;
		st=st*2;
		a=a/2;
	}
	if(n>count) cout<<m;
	else
	{
		int p=count-n;
		for(int i=0;i<p;i++) st=st/2;
		cout<<m%st;
	}
}
