#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n],i,j;
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
	for(i=0;i<n;i++) printf("%d ",s[i]);
}
