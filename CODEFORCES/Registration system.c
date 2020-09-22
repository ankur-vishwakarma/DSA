#include<stdio.h>
main()
{
	int i,j,k,flag=0,n;
	scanf("%d",&n);
	char s[n][34];
	for(i=0;i<n;i++) scanf("%s",s[i]);
	printf("OK");
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			for(k=0;s[i][k]!='\0'||s[j][k]!='\0';k++)
			{
				if(s[i][k]!=s[j][k])
				{
					flag=1;
					break;
				}
			}
			if(flag!=1)
			{
		
			}
		}
	}
}
