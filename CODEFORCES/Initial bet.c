#include<stdio.h>
main()
{
	int s[5],i,sum=0;
	for(i=0;i<5;i++) scanf("%d",&s[i]);
	for(i=0;i<5;i++) sum=sum+s[i];
	if(sum>0&&sum%5==0) printf("%d",sum/5);
	else printf("-1");
}
