#include <stdio.h>
main()
{
	int a=10;
	int *ptr=&a;
	printf("%u\n",a);
	printf("%u",&a);
}
