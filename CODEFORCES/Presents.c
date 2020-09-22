#include<stdio.h>
main()
{
	int n,i,j,s[100],count=0;
	scanf("%d",&n);
	for(j=0;j<n;j++) scanf("%d",&s[j]);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			count++;
			if(i==s[j])
			{
			break;	
			}
		}
		printf("%d ",count);
		count=0;
	}
}
