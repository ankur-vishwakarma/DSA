#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int j,i,s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				int t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	int count=1,l=1;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j]) count++;
			else break;
		}
		if(count>l) l=count;
		count=1;
	}
	printf("%d",l);
}
