#include<stdio.h>
main()
{
	long n,m;
	scanf("%ld%ld",&n,&m);
	long s[m+1],count=0;
	int i,flag=0;
	s[0]=1;
	for(i=1;i<m+1;i++) scanf("%ld",&s[i]);
	for(i=1;i<m;i++)
	{
		if(s[i+1]<s[i])
		{
			if(flag==0) count=count+(s[i]-s[i-1])+(n-s[i])+1;
			else count=count+(s[i]-1)+(n-s[i])+1;
			flag=1;
		}
		else
		{
			if(flag==1) count=count+(s[i]-1);
			else count=count+(s[i]-s[i-1]);
			flag=0;
		}
	}
	if(flag==0) count=count+(s[i]-s[i-1]);
	else count=count+s[i]-1;
	printf("%ld",count);
}
