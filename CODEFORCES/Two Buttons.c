#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(m<n)
	{
		printf("%d",n-m);
		return 0;
	}
	else
	{
		int a=m-n;
		int b=a/n,c=a%n;
		printf("%d",b+1+(n-c));
	}
}
