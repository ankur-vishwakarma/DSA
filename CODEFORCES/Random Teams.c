#include<stdio.h>
main()
{
	long long n,m;
	scanf("%I64d%I64d",&n,&m);
	long long min=0,a=n-2*m,count=0;
	if(a>=0)
	{
		a=a-1;
		while(a>0)
	{
		min=min+a;
		a--;
	}
	printf("%I64d ",min+m);
	}
    else
    {
    	while(a<0)
    	{
    		a+=2;
    		count++;
		}
        printf("%I64d",m-count);
	}
	long long max=0,k=n-(m-1);
	k=k-1;
	while(k!=0)
	{
		max=max+k;
		k--;
	}
	printf("%I64d",max);
}
