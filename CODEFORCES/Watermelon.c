#include <stdio.h>
main()
{
	int n,m,a,t=0;
	scanf("%d %d %d",&n,&m,&a);
	for(;n-a>0;)
	{
		t=t+1;
		n=n-a;
	}
	m=m-a;
	for(;m-a;)
	{
		t=t+1;
		m=m-a;
	}
	printf("%d",t);
}
