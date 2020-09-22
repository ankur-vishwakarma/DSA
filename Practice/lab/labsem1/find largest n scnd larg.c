#include <stdio.h>
main()
{
	int mark[10],i,k=0;
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
	printf("largest=%d\n",largest);
	int largest1=mark[0];
		for(i=1;i<10;i++)
	{
		if(mark[i]>largest1&&mark[i]<largest) largest1=mark[i];
	}
	printf("scnd largest=%d\n",largest1);
//or do in descending order n thn access first two
   for(i=2;i<largest1;i++)
   {
   	if(largest%i==0&&largest1%i==0)
   	{
   		printf("common divisor is %d\n",i);
   		k=1;
	}
    }
    if(k!=1) printf("%d n %d have no common divisor",largest,largest1);
}
