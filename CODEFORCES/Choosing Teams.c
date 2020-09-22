#include<stdio.h>
main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int i,s[n],count=0;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		if(5-s[i]>=k) count++;
	}
	printf("%d",count/3);
}
