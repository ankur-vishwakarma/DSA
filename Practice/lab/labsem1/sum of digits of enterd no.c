#include <stdio.h>
main()
{
	int a,b;
	printf("enter ur no");
	scanf("%d",&a);
	b=a/1000+((a%1000)/100)+(((a%1000)%100)/10)+(((a%1000)%100)%10);
	printf("%d",b);
}
