#include<stdio.h>
main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,count=0;
	for(i=1;i<=m;i++) if(n%i==0&&n/i<=m) count++;
	printf("%d",count);
}
