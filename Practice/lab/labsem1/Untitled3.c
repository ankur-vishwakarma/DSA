#include<stdio.h>
main()
{
	int a,b,i,k;
	float c,d,t,m;
	
	do{
	printf("enter four digit");
	scanf("%d%d%f%f",&a,&b,&c,&d);
	t=a+b+c+d;
	m=a*b*c*d;
	scanf("%d",&i);
	if(i==2)
	{
		printf("t=%f",t);
	}
	else if(i==3)
	{
	printf("m=%f",m);
	}
	else 
	printf("rohit");
	scanf("%d",&k);	
	}while(k!=1);
}	
