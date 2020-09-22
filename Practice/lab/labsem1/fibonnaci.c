#include <stdio.h>
main()
{
	int n=1,s=1,m;
	printf("enter till where u wnt series");
	scanf("%d",&m);
	do
	{
	printf("%d ",n);
	s=s+n;
	n=s-n;	
	}
	while(n<=m);
}
