#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n][2],i,j;
	for(i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i][0]<s[j][0])
			{
				if(s[i][1]>s[j][1])
				{
					printf("Happy Alex");
					return 0;
				}
			}
		}
	}
	printf("Poor Alex");
}

