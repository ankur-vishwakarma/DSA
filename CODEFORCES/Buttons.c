#include<stdio.h>
main()
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=c+((i*(n-i))+1);
	}
	printf("%d",c);
}
