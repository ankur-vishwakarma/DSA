#include<stdio.h>
main()
{
	int n,t,i,j=10;
	scanf("%d%d",&n,&t);
	int k=t;
	for(i=1;i<n;i++)
	{
		t=t+k*j;
		j=j*10;
	}
	printf("%d",t);
}
