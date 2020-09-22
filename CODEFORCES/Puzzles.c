#include<stdio.h>
main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	int s[n];
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
	int min=s[m-1]-s[0];
	for(i=1;i<=(n-m);i++) if((s[i+m-1]-s[i])<min) min=s[i+m-1]-s[i];
	printf("%d",min);
}
