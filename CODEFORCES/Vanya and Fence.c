#include<stdio.h>
main()
{
	int n,h;
	scanf("%d%d",&n,&h);
	int s[n],i,count=0;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
	    if(s[i]<=h) count++;
		else count=count+2;		
	}
	printf("%d",count);
}
