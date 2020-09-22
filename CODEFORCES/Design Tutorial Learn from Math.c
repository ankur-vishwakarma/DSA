#include<stdio.h>
main()
{
	long n,x,y,count=0,fi=0,i;
	scanf("%ld",&n);
	for(x=4;;x++)
	{
		count=0,fi=0;
		y=n-x;
		for(i=2;i<=x/2;i++) 
		{
			if(x%i==0) count++;
			if(count>0) break;
		}
		if(count>0)
		{
			for(i=2;i<=y/2;i++)
			{
				if(y%i==0) fi++;
			    if(fi>0) break;
			}
		}
		if(fi>0&&count>0)
		{
		    printf("%ld %ld",x,y);
			return 0;	
		} 
	}
}
