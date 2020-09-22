#include<stdio.h>
main()
{
	long long n,k;
	scanf("%I64d%I64d",&n,&k);
	if((n/k)%2!=0) printf("YES");
	else printf("NO");
}
