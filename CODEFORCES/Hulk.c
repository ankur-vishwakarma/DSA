#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   if(i!=1)	printf("that ");
	   if(i%2!=0) printf("I hate ");
	   else printf("I love ");
	}
	printf("it");
}
