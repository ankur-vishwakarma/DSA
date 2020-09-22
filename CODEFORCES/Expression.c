#include<stdio.h>
main()
{
	int a,b,c,g=0;
	scanf("%d%d%d",&a,&b,&c);
	if((a*b*c)>g) g=a*b*c;
	if((a+b+c)>g) g=a+b+c;
	if(((a+b)*c)>g) g=(a+b)*c;
	if((a*(b+c))>g) g=a*(b+c);
	if((a+b*c)>g) g=a+b*c;
	if((a*b+c)>g) g=a*b+c;
	printf("%d",g);
}
