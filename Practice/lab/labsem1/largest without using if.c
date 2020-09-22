#include <stdio.h>
main()
{
	int a,b,c;
	printf("enter three nos");
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c) ? printf("a is largest") : ((b>a&&b>c) ? printf("b is largest") : printf("c is largest"));
}
