#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n],i,count=0;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	int max=s[0],min=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i]>max)
		{
			count++;
			max=s[i];
		}
		if(s[i]<min)
		{
			count++;
			min=s[i];
		}
	}
	printf("%d",count);
}
