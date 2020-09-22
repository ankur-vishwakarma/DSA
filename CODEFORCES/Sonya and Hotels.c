#include<stdio.h>
main()
{
	int n,d;
	scanf("%d%d",&n,&d);
	int i,j,count=0,s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				int temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		int t=s[i+1]-s[i];
		if(t>2*d) count+=2;
		if(t==2*d) count++;
	}
	printf("%d",count+2);
}
