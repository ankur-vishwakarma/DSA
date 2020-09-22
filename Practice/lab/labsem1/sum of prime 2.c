#include <stdio.h>
main()
{
	int i,j,s=2,k=0;
	for(i=3;i<=100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
			else continue;
		}
		if(k!=1)
		{
			s=s+i;
		}
		k=0;
	}
	printf("sum=%d",s);
}
