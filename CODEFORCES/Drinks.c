#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	float s[n];
	float sum=0;
	for(i=0;i<n;i++) scanf("%f",&s[i]);
	for(i=0;i<n;i++) sum=sum+s[i];
	printf("%0.12f",sum/n);
}
