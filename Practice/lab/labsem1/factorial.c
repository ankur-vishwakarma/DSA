#include <stdio.h>
main()
{
	int n,a=1;
	printf("enter the no\n");
	scanf("%d",&n);
	printf("%d!=",n);
	for(n;n>1;n--)
	{
		printf("%d*",n);
		a=a*n;
	}
	printf("1=%d",a);
}
