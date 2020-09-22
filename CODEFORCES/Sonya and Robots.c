#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n];
	long long i,r=0,j,c=0;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=n-1;i>0;i--) r=r+i;
	int t[r][2];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			t[c][0]=s[i];
			t[c][1]=s[j];
		    c++;
		}
	}
	long long count=r;
	for(i=0;i<r;i++)
	{
		for(j=i+1;j<r;j++) 
		{
			if(t[i][0]==t[j][0]&&t[i][1]==t[j][1]&&t[i][0]!=0) 
			{
				count--;
				t[j][0]=0,t[j][1]=0;
			}
		}
	}
	printf("%I64d",count);
}
