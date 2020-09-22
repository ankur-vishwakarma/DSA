#include<stdio.h>
main()
{
	int i,j,k=65,p=0,m=0;
	for(i=1;i<=7;i++)
	{
		for(j=7;j>=i;j--)
		{
		printf("%c",k);	
		k=k+1;
		}
		printf("\n");
		k=65;
	}
}
