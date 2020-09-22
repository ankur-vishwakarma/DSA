#include<stdio.h>
main()
{
	float a;
	scanf("%f",&a);
	float b,c,d;
	b=((40*a)/100);
	c=b+((20*a)/100);
	d=a-c;
	printf("gross salary=%f",d);
}
