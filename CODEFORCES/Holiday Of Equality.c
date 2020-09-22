#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i,s[n];
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	int sum=0,max=s[0];
	for(i=1;i<n;i++) if(s[i]>max) max=s[i];
	for(i=0;i<n;i++) sum+=(max-s[i]);
	printf("%d",sum);
}
