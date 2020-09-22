#include<stdio.h>
main()
{
	int m,n,j,i,flag=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
	   	if((i+1)%2!=0) for(j=0;j<m;j++) printf("#");
	   	else
		{
		    if(flag==0)
		    {
		    	for(j=0;j<m-1;j++) printf(".");
		    	printf("#");
		    	flag=1;
			}
			else if(flag==1)
		    {
		    	printf("#");
		    	for(j=1;j<m;j++) printf(".");
		    	flag=0;
			}
		}
		printf("\n");
	}
}
