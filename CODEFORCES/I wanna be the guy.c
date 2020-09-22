#include<stdio.h>
main()
{
	int n,p,i,q,j,count=0;
	scanf("%d%d",&n,&p);
	int s[p];
	for(i=0;i<p;i++) scanf("%d",&s[i]);
	scanf("%d",&q);
	int t[p+q];
	for(i=0;i<p;i++) t[i]=s[i];
	for(i=p;i<p+q;i++) scanf("%d",&t[i]);
	for(j=1;j<=n;j++)
	{
		for(i=0;i<p+q;i++) 
		{
			if(j==t[i])
			{
				count++;
				break;
			}
		}
	}
	if(count==n) printf("I become the guy.");
	else printf("Oh, my keyboard!");
}
