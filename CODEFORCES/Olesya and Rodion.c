#include<stdio.h>
#include<math.h>
main()
{
	int n,t,i;
	scanf("%d%d",&n,&t);
	n=pow(10,n-1);
	for(i=n;i<n*10;i++)
	{
		if(i%t==0)
		{
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
}
