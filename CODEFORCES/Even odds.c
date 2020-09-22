#include<stdio.h>
main()
{
	long long n,k,i;
	scanf("%I64d%I64d",&n,&k);
	long long p=n/2;
	if(n%2==1) p=p+1;
	if(k<=p)
	{
		for(i=1;i<2*k-2;i+=2);
		printf("%I64d",i); 
    }
	else if(k>p)
	{
	for(i=0;i<=(2*k-n)-2;i+=2);	
	 printf("%I64d",i);
	}
}
