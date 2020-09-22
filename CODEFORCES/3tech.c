#include<stdio.h>
main()
{
	int n,j,i,k,flag=0;
	scanf("%d",&n);
	char s[n][10001];
	for(i=0;i<n;i++) scanf("%s",s[i]);
	for(i=0;i<n;i++)
	{
		int l=strlen(s[i]);
		for(j=0,k=l-1;j<=n/2;j++,k--)
		{
			if(s[i][k]!=s[i][j]) flag=1;
		}
		if(flag==0) printf("love\n");
		else printf("hate\n");
		flag=0;
	}
	
	
}
