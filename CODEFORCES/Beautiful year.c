#include<stdio.h>
main()
{
	int y,i,j,flag=0,count=0;
	char s[5];
	scanf("%d",&y);
    while(count!=1)
    {
    	y++;
    	count=0;
    	for(i=1;i<=1000;i*10)
    	{
    		for(j=i*10;j<=1000;j*10)
    		{
    			if((y/i)%10==(y/j)%10)
    			{
    				flag=1;
    				break;
				}
			}
			if(flag==1) break;
			else count=1;
		}
	}
	printf("%d",y);
}
