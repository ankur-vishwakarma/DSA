#include<stdio.h>
main()
{
	int a,b,n;
	scanf("%d%d%d",&n,&a,&b);
	int p=a+b;
	if(b>0) while(p>n) p=p-n;
	else if(b<0) while(p<=0) p=p+n;
	printf("%d",p);
}
