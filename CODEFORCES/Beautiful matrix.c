#include<stdio.h>
main()
{
	int mat[5][5],i,j,p=0,k=0;
	for(i=0;i<5;i++) for(j=0;j<5;j++) scanf("%d",&mat[i][j]);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(mat[i][j]==1)
			{
				if(i>=2) k=i-2;
				else k=2-i;
				if(j>=2) p=j-2;
				else p=2-j;
			}
		}
	}
	
	printf("%d",(p+k));
}
