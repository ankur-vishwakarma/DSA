#include <stdio.h>
main()
{
	int n,m[1000][3],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d%d%d",&m[i][0],&m[i][1],&m[i][2]);
	int sum,count=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+m[i][j];
		}
		if(sum>=2) count++;
	}
	printf("%d",count);
}
