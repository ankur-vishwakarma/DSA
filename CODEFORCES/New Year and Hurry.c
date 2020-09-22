#include<stdio.h>
main()
{
	int i,n,k,t=0;
	scanf("%d%d",&n,&k);
	for(i=1;(i<=n);i++)
	{
		 t=t+5*i;
		 if(t>(240-k)) break;
	}
	printf("%d",i-1);
}
