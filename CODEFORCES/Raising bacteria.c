#include<stdio.h>
#include<math.h>
main()
{
	int n,count=1;
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0) n=n/2;
		else
		{
			count++;
			n=(n-1)/2;
		}
	}
	printf("%d",count);
}
