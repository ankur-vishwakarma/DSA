#include<stdio.h>
main()
{
	long n,g=1;
	scanf("%ld",&n);
	int s[n],i;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i+1<n;i++) if(s[i+1]!=s[i]) g++;
	printf("%ld",g);
}
