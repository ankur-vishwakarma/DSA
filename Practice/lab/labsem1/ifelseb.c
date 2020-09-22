#include<stdio.h>
main()
{
	int salary,hra,da;
	printf("PLZ ENTER SALARY");
	scanf("%d",&salary);
	if(salary<1500)
	{
	hra=90*salary/100,da=10*salary/100;
	printf("TOTAL SALARY=%d",salary+hra+da);
	}
	else
	{
		hra=500,da=98*salary/100;
		printf("TOTAL SALARY=%d",salary+hra+da);
	}
	
}
