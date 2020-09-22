#include <stdio.h>
main()
{
	int n,s[100][2],i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i][1]==s[j][0]) k++;
			if(s[i][0]==s[j][1]) k++;
		}
	}
	printf("%d",k);
}
