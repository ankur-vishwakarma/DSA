#include <stdio.h>
#include <math.h>
main()
{
	int i;
	float l,r,c=0.01;
	printf("enter value of inductance and resistance");
	scanf("%f%f",&l,&r);

	for(i=1;i<=10;i++)
	{
			double fre=sqrt((1/(l*c))-((r*r)/(4*c*c)));
		printf("frequency%d=%lf capacitance=%f\n",i,fre,c);
		c=c+0.01;
	}
	
}
