#include<stdio.h>
main()
{
	int count=1,g=1,i;
	long n;
	scanf("%ld",&n);
	long s[n];
	for(i=0;i<n;i++) scanf("%ld",&s[i]);
	for(i=0;i+1<n;i++)
	{
		if(s[i+1]>=s[i])  count++;
		else count=1;
		if(count>g) g=count;
	}
	printf("%ld",g);
}
