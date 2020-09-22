//binary search
#include <stdio.h>
main()
{
	int i,j,m[10],start,mid,end,k=0,n;
	for(i=0;i<10;i++)
	{
		printf("enter the %dth no of series",i+1);
	    scanf("%d",&m[i]);
	}
		for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(mark[i]>mark[j])
			{
				int temp=mark[i];
				mark[i]=mark[j];
				mark[j]=temp;
			}
		}
		printf("%d  ",mark[i]);
	}
	printf("enter the no u wnt to search");
	scanf("%d",&n);
	start=m[0];end=m[9];
	mid=(start+end)/2;
	for(i=0;m[i]!=end||m[i]!=start;i++)
	{
			if(n<mid)
			{
				end=mid;
				mid=(start+end)/2;
			}
			else if(n>mid)
			{
				start=mid;
				mid=(start+end)/2;
			}
			else if(n==mid)
			{
				printf("no is found");
				k=1;
				break;
			}
	}
	if(k!=1) printf("no is not found");
}
