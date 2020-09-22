#include <stdio.h>
main()
{
	int n;
	printf("enter a no");
	scanf("%d",&n);
	while(n%10!=0)
	{
		printf("%d",n%10);
		n=n/10;
	}
}
