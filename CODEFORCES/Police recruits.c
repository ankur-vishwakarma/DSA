#include<stdio.h>
main()
{
	long n,p=0,count=0;
	scanf("%ld",&n);
	int i,s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		if(s[i]<0)
		{
	      if(p+s[i]<0) count++;
	      else if(p+s[i]>=0) p=p+s[i];
		}
		else if(s[i]>0) p=p+s[i];
	}
	printf("%ld",count);
}
