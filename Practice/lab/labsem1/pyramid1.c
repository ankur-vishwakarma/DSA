#include <stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(j=3;j>i;j--){
		printf(" ");
	}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=1;k<i;k++){
			printf("*");	
		}
		printf("\n");
	}
}
