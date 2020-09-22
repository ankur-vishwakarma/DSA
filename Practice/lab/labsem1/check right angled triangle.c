#include <stdio.h>
main()
{
	int a,b,c;
	printf("enter the sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) printf("right angled");
	else printf("not right angled");
}
