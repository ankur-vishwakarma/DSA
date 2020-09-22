#include <stdio.h>
main()
{
	int c=10,d=56;
	int temp=c;
	c=d;
	d=temp;
	printf("%d  %d",c,d);
}
/*without using temp
int c=10,d=20;
pf("%d %d",d,c)*/
