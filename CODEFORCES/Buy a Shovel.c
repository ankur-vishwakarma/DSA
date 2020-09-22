#include<stdio.h>
main()
{
	int s,t,i;
	scanf("%d%d",&s,&t);
	int o=s%10;
	for(i=1;i<=9;i++)
	{
		if((o*i)%10==t||(o*i)%10==0) break;
	}
	if(o==0) i=1;
	else if(o==5) if(i>2) i=2;
	printf("%d",i);
}
