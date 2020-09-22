#include <stdio.h>
main()
{
	int mark[10],i,n,run=0
	;
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
			run=1;
			break;
		}
	}
	if(run!=1) printf("no not found");
}
