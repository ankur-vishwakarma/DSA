#include <stdio.h>
main()
{
	long long a;
	long long n,m,k=0;
	scanf("%I64d%I64d%I64d",&n,&m,&a);
	if(a>m&&a>n) k=1;
	else if(m%a==0)
	{
		if(n%a==0) k=(m/a)*(n/a);
		else if(n%a>0) k=(m/a)*(n/a+1);
	}
	else if(m%a>0)
	{
		if(n%a==0) k=(m/a+1)*(n/a);
		else if(n%a>0) k=(m/a+1)*(n/a+1);
	}
	printf("%I64d",k);
}
