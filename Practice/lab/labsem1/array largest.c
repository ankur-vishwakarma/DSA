#include <stdio.h>
main()
{
	int mark[10],i;
	for(i=0;i<10;i++)
	{
		printf("entr %d th element",i+1);
		scanf("%d",&mark[i]);
	}
	int largest=mark[0];
	for(i=1;i<10;i++)
	{
		if(mark[i]>largest) largest=mark[i];
	}
	printf("maximum=%d\n",largest);
	

}
