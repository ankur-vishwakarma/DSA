#include<stdio.h>
main()
{
	int n,s[12],i,j;
	scanf("%d",&n);
	for(i=0;i<12;i++) scanf("%d",&s[i]);
	for(i=0;i<12;i++)
	{
		for(j=i+1;j<12;j++)
		{
			if(s[i]<s[j])
			{
			   int temp=s[i];
			   s[i]=s[j];
			   s[j]=temp;
			}
		}
	}
	int k=0,count=0;
	for(i=0;i<12&&k<n;i++)
	{
		count++;
		k+=s[i];
	}
	if(k>=n) printf("%d",count);
	else printf("-1");
}
