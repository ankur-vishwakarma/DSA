#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n],t[n-1],u[n-2],i,sums=0,sumt=0,sumu=0;
	for(i=0;i<n;i++)
	{
		 scanf("%d",&s[i]);
		 sums=sums+s[i];
	}
	for(i=0;i<n-1;i++)
	{
		 scanf("%d",&t[i]);
		 sumt=sumt+t[i];
	}
	for(i=0;i<n-2;i++)
	{
		 scanf("%d",&u[i]);
		 sumu=sumu+u[i];
	}
	printf("%d\n%d",sums-sumt,sumt-sumu);
}
