#include <stdio.h>
main()
{
	int mark[10],i,j;
	for(i=0;i<10;i++)
	{
		printf("entr %d th element",i+1);
		scanf("%d",&mark[i]);
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
}
