#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i,s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	int max=s[0],min=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i]>max) max=s[i];
		if(s[i]<min) min=s[i];
	}
	printf("%d ",max-min);
	long long a=0,b=0;
	for(i=0;i<n;i++)
	{
		if(s[i]==max) a++;
		if(s[i]==min) b++;
	}
	if(max==min)
	{
		long long k=0;
		for(i=a-1;i>0;i--) k=k+i;
		printf("%I64d",k);
	}
	else printf("%I64d",a*b);
}
