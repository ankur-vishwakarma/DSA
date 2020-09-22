#include<stdio.h>
main()
{
	int min,t,th,f,s;
	scanf("%d%d%d%d",&t,&th,&f,&s);
	if(t<=f&&t<=s) min=t;
	else if(f<=t&&f<=s) min=f;
	else min=s;
	int sum=min*256;
	t=t-min;
	if(t<th) min=t;
	else min=th;
	sum=sum+min*32;
	printf("%d",sum);
}
