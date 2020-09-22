#include<stdio.h>
main()
{
	int s=0,n;
	printf("enter ur no");
	scanf("%d",&n);
	int b=n;
	while(b%10!=0)
	{
	s=s+n%10;
	b=n/10;
    }
    printf("%d",s);
}
