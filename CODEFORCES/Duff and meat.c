#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i,s[n][2],m=0,flag=0,j;
	for(i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++)
	{
		m=m+s[i][0]*s[i][1];
		for(j=i+1;s[i][1]<s[j][1]&&j<n;j++)
		{
			 m=m+s[i][1]*s[j][0];
			 flag=1;
		}
		if(flag==1) i=j-1;
		flag=0;
	}
	printf("%d",m);
}
