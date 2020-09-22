#include<stdio.h>
main()
{
	int a,b,c,min;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c)<=2*(a+b)&&(a+b+c)<=2*(b+c)&&(a+b+c)<=2*(a+c)) min=a+b+c;
	else if(2*(a+b)<=a+b+c&&2*(a+b)<=2*(b+c)&&2*(a+b)<=2*(a+c)) min=2*(a+b);
	else if(2*(b+c)<=a+b+c&&2*(b+c)<=2*(a+b)&&2*(b+c)<=2*(a+c)) min=2*(b+c);
	else min=2*(a+c);
	printf("%d",min);
}
