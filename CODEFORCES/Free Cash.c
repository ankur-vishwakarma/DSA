#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i,s[n][2],j,count=1,l=1;
	for(i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i][0]==s[j][0]&&s[i][1]==s[j][1]) 
			{
				count++;
				i=j;
			}
			else break;
		}
		if(count>l) l=count;
		count=1;
	}
	printf("%d",l);
}
