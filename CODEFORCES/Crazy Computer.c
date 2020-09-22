#include<stdio.h>
main()
{
	int n,c;
	scanf("%d%d",&n,&c);
	int count=1,i,s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	if(n==1)
	{
		 printf("1");
		 return 0;
	}
	for(i=1;i<n;i++)
	{
		if(s[i]-s[i-1]<=c) count++;
		else count=1;
	}
	printf("%d",count);
}
