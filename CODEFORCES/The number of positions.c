#include<stdio.h>
main()
{
	int i,a,b,n,j,k,sum=0,f=1;
	scanf("%d%d%d",&n,&a,&b);
	for(i=0;i<=b;i++)
	{
		a=a+i,b=b-i;
	
		int k=(n-a-b);
		for(j=k;j>1;j--) f=f*j;
		sum=sum+f;
		f=1;
	}
	printf("%d",sum);
}
