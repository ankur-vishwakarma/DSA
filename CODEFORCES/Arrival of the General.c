#include<stdio.h>
main()
{
	int n,i;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	int max=s[0],min=s[n-1],pmax=0,pmin=n-1;
	for(i=n-1;i>=0;i--)
	{
		if(s[i]>=max)
		{
			 max=s[i];
			 pmax=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i]<=min)
		{
			 min=s[i];
			 pmin=i;
		}
	}
	int time=pmax+((n-1)-pmin);
	if(pmax>pmin) time=time-1;
	printf("%d",time);
}
