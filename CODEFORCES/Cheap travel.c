#include<stdio.h>
main()
{
	int n,m,a,b;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	int s=n*a;
	if((n/m*b)+(n%m*a)<s) s=(n/m*b)+(n%m*a);
	if(((n/m*b)+b)<s) s=(n/m*b)+b;
	printf("%d",s);
}
