#include <stdio.h>
main()
{
	int m,n;
	printf("enter m and n");
	scanf("%d   %d",&m,&n);
	if(m%n==0) printf("m is a multiple of n");
	else printf("m is not a multiple of n");
}
