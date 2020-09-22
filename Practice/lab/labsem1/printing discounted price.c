// PRINTING BILL WITH DISCOUNT
#include<stdio.h>
main()
{
	int a;
	printf("enter the price of item:");
	scanf("%d",&a);
	if(a>1000)printf("total amount=%d",a-a/10);
	else printf("no discount\ntotal amount=%d",a);
}
