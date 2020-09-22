#include<stdio.h>
main()
{
	int i,j;
	printf("2\n");
	for(i=2;i<=10;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i%j!=0)	printf("%d ",i);
	}
}
