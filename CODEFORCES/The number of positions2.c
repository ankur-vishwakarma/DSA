#include<stdio.h>
main()
{
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int i=a,j=n-a-1,count=0;
    while(j>=0)
    {
    	if(j-i<=b) count++;
    	j--;
    	i++;
	}
	printf("%d",count);
}
