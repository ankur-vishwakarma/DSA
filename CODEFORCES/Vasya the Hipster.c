#include<stdio.h>
main()
{
	int a,b,m,k;
	scanf("%d%d",&a,&b);
	if(a<b) m=a,k=b;
	else m=b,k=a;
	printf("%d %d",m,(k-m)/2);
}
