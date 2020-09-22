#include<stdio.h>
main()
{
	int t,n[101],s[101][1001],time=0,i,j,flag;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<=n[i];j++) scanf("%d",&s[i][j]);
	}
	for(i=0;i<t;i++)
	{
		flag=0;
		for(j=0;j<n[i];j++)
		{
			if(flag==0)
			{
			 if(s[i][j]%2==0) time=time+s[i][j]+1;
			else time=time+s[i][j];
			 flag=1;
			}
			else if(flag==1)
			{
			if(s[i][j]%2==0) time=time+s[i][j];
			else time=time+s[i][j]+1;
			}
		}
		printf("%d\n",time+s[i][j]);
		time=0;
	}
}
