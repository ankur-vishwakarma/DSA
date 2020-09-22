#include <stdio.h>
main()
{
	int mark[10],i,j,n,sum=0;
	for(i=0;i<10;i++)
	{
		printf("entr %d th element",i+1);
		scanf("%d",&mark[i]);
		sum=sum+mark[i];
	}
// a. SUM OF ALL NUMBERS
printf("sum=%d\n",sum);
// b. MAXIMUM N MINIMUM
	int largest=mark[0];
	for(i=1;i<10;i++)
	{
		if(mark[i]>largest) largest=mark[i];
	}
	printf("maximum=%d\n",largest);
	int smallest=mark[0];
	for(i=1;i<10;i++)
	{
		if(mark[i]<smallest) smallest=mark[i];
	}
	printf("minimum=%d\n",smallest);
//ASCENDING N DESCENDING
printf("descending order:");
		for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(mark[i]<mark[j])
			{
				int temp=mark[i];
				mark[i]=mark[j];
				mark[j]=temp;
			}
		}
		printf("%d  ",mark[i]);
	}
    printf("\n");
printf("ascending order:");
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
	printf("\n");
// LINEAR SEARCH
	printf("enter no u wnt to search in array");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(mark[i]==n)
		{
			printf("no is found at the location mark[%d]",i);
			break;
		}
	}
	if(mark[i-1]!=n&&mark[i]!=n) printf("no not found");
}
