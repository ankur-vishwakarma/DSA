#include<stdio.h>
main()
{
	int n,i,j=0;
	scanf("%d",&n);
	for(i=1;n>=0;i++)
	{
		j=j+i;
		n=n-j;
	}
	printf("%d",i-2);
}
