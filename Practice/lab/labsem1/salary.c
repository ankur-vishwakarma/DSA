#include<stdio.h>
main()
{
    int salary;
    printf("ENTER YOUR SALARY");
    scanf("%d",&salary);
    printf("YOUR TOTAL SALARY IS %d",salary+(4*salary/10)+(2*salary/10));
}
