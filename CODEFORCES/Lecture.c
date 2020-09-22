#include<stdio.h>
#include<string.h>
main()
{
	int n,m,i,j,k,flag=0,count=0;
	scanf("%d%d",&n,&m);
	char s[2*m][11],t[n][11];
	for(i=0;i<2*m;i++) scanf("%s",s[i]);
	for(i=0;i<n;i++) scanf("%s",t[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j+=2)
		{
			for(k=0;t[k]!='\0';k++)
			{
				if(t[i][k]!=s[j][k])
				{
					printf("%d %d\n",i,j);
					flag=1;
					break;
				}
			}
			if(flag!=1)
			{
				if(strlen(s[j])<=strlen(s[j+1])) printf("%s ",s[j]);
				else printf("%s ",s[j+1]);
				count=1;
			}
			flag=0;
			if(count!=0) break;
		}
		count=0;
	}
}
