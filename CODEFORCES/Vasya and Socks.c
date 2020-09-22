#include<stdio.h>
main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++) if(i%m==0) n++;
	printf("%d",n);
}
