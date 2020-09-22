#include<cstdio>
#include<iostream>
using namespace std;
main()
{
	int a,b,m=0;
	scanf("%d%d",&a,&b);
	while(a!=0&&b!=0)
	{
		if(b-a>=0) b=b-a;
		else a=a-b;
		m++;  
	}
	printf("%d",m);
}
