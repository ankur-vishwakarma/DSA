#include<stdio.h>
main()
{
	int y;
	scanf("%d",&y);
		y++;
	int a,b,c,d;
	while(2)
	{
		a=y%10,b=(y/10)%10,c=(y/100)%10,d=(y/1000)%10;
	    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
	    {
	    	printf("%d",y);
	    	return 0;
		}
		y++;
	}
}
