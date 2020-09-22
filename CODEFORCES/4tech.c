#include<stdio.h>
main()
{
	int n,j,i,k,flag=0;
	scanf("%d",&n);
	char s[n][101];
	for(i=0;i<n;i++) scanf("%s",s[i]);
	for(i=0;i<n;i++)
	{
		int l=strlen(s[i]);
		for(j=0;j<l;j++)
		{
			for(k=j+1;k<l;k++)
			{
				if(s[i][j]>s[i][k])
				{
					char temp=s[i][j];
					s[i][j]=s[i][k];
					s[i][k]=temp;
				}
			}
		}
	if(s[i]="ilnsu") printf("sunil");
	else if(flag==2) printf("morphosis");
	else printf("ranjeet");
	flag=0;
	}
	
}
