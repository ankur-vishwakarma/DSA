#include<stdio.h>
main()
{
	long x,s;
	scanf("%ld",&x);
	if(x%5==0) s=x/5;
	else s=x/5+1;
	printf("%ld",s);
}
