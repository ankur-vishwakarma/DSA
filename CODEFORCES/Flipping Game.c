#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i,s[n],max=0,z=0,o=0,sp=0,ep=0,flag=0,check=0;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		if(s[i]==0) z++;
		else o++;
	}
	if(o==n) 
	{
		printf("%d",n-1);
		return 0;
	}
	else if(z==n)
	{
		printf("%d",n);
		return 0;
	}
	if(z>o)
	{
		printf()
	}
	z=0,o=0;
	for(i=0;i<n;i++)
	{
		if(s[i]==0) z++;
		else
		{
			if(z>max)
			{
				max=z;
				sp=i-z;
				ep=i-1;
				z=0;
			}
		}
	}
	for(i=sp;i<=ep;i++) s[i]=1;
	for(i=0;i<n;i++)
    {
    	if(s[i]==1) o++;
    	else
    	{
    		if(o>max) max=o;
    		o=0;
		}
	}
	if(o>max) max=o;
	printf("%d",max);
}
