#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n],t[n],i,j;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++) t[i]=s[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(t[i]<t[j])
			{
				int tem=t[i];
				t[i]=t[j];
				t[j]=tem;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) 
		{
			if(s[i]==t[j])
			{
				printf("%d ",j+1);
				break;
			}	
		}
	}
}
