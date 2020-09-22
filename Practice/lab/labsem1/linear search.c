#include <stdio.h>
main()
{
	int mark[10],i,n;
	for(i=0;i<10;i++)
	{
		printf("entr %d th element",i+1);
		scanf("%d",&mark[i]);
	}
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
