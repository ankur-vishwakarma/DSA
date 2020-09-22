#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int q=n/2,r=n%2,flag=0;
	do{
		if((q+r)%m==0)
		{
			printf("%d",q+r);
			flag=1;
		}
		else q=q-1,r=r+2;
	}while(flag!=1&&q>=0);
	if(flag==0) printf("-1");
}
