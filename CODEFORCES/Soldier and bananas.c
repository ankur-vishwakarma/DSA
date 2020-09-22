#include<stdio.h>
main()
{
	int c,n,i;
	long long m,total=0;
	scanf("%d%I64d%d",&c,&m,&n);
	for(i=1;i<=n;i++)
	{
		total=total+c*i;
	}
	if(total>m) printf("%I64d",total-m);
	else printf("0");
}
