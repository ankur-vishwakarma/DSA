#include<stdio.h>
main()
{
	int n,i,j,loop=1,count=0;
	scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
    	if(n%i==0)
    	{
    		loop=0,count=0;
    		int p=n/i;
    		for(j=1;p/j!=0;j=j*10)
    		{
    			loop++;
    			if((p/j)%(10)==4||(p/j)%(10)==7) count++;
			}
		}
		if(count==loop) break;
	}
	if(count==loop) printf("YES");
	else printf("NO");
}
