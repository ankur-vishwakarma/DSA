#include <stdio.h>
main()
{
	int n=4321,k=1000,p=n;
    while(k>0)	
	{
		printf("%d\n",p);
		p=n%k;
		k=k/10;
	}
}
