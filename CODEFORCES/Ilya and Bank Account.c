#include<stdio.h>
main()
{
	long n;
	scanf("%ld",&n);
	if(n>0)
	{
		printf("%ld",n);
		return 0;
	}
	else
	{
		if(n>-100)
		{
			if(n/10>n%10) printf("%ld",n/10);
			else printf("%ld",n%10);
		}
		else
		{
		    long s=((n/100)*10+(n%100)%10);
			if(n/10>s) printf("%ld",n/10);
		    else printf("%ld",s);
		}
	
	}
}
