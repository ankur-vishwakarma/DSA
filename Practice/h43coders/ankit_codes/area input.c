#include<stdio.h>
main()
{
	float l,b,r;
	scanf("%f%f%f",&l,&b,&r);
	float a,e,c,d;
	a=l*b;
	e=2*(l+b);
	c=2*3.14*r;
	d=3.14*r*r;
	printf("area of rect=%f\n peri of rect=%f\n area of circle=%f\n cirumference of cicrle=%f",a,e,c,d);
}
