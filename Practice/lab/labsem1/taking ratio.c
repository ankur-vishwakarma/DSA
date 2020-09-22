#include <stdio.h>
main()
{
	int a,b,c,d;
	printf("enter a b c d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	float r=(a+b)/(c-d);
	if(c-d!=0)printf("ratio is %f",r);
}
