#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three no.s");
	scanf("%d   %d  %d",&a,&b,&c);
	if(a>b&&a>c)
	printf("A is greatest");
	else
	if(b>a&&b>c)
	printf("B is greatest");
	else
	printf("C is greatest");
}
