#include <stdio.h>
#include<math.h>
main()
{
	int i,p=1000,n;
	float r=0.1;
	float v;
	for(i=1;i<=10;i++)
	{
		int temp=p;
	for(n=1;n<=10;n++)
	{
		v=p*pow(1+r,n);
		r=r+.01;
		p=v;
	}
	printf("%f\n",v);
	r=0.1;
	p=temp+1000;
	}

}
