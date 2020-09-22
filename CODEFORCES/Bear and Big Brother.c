#include<stdio.h>
main()
{
	int a,b,i=0;
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		i++;
		a=a*3,b=b*2;
	}
	printf("%d",i);
}
