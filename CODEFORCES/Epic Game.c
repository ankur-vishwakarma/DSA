#include<stdio.h>
main()
{
	int a,b,n,i,flag=0,s,gcd=1;
	scanf("%d%d%d",&a,&b,&n);
    while(n>0)
    {
    	if(flag==0)
    	{
    		if(a<n) s=a;
			else s=n;
    	for(i=1;i<=s;i++)
	{
		if(a%i==0&&n%i==0)
		{
			if(i>gcd) gcd=i;
			flag=1;
		}
	}
		}
		else if(flag==1)
		{
			if(b<n) s=b;
			else s=n;
				for(i=1;i<=s;i++)
	{
		if(b%i==0&&n%i==0)
		{
			if(i>gcd) gcd=i;
			flag=0;
		}
	}
		}
		n=n-gcd;
		gcd=1;
	}
	if(flag==1) printf("0");
	else printf("1");
}
