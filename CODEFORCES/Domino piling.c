#include<stdio.h>
main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<2&&n<2) printf("0");
	else printf("%d",(m*n)/2);
}
