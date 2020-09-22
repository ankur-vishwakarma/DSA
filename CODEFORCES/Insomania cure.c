#include<stdio.h>
main()
{
	int i,a,b,c,d,s;
	long n,count=0;
	scanf("%d%d%d%d%ld",&a,&b,&c,&d,&n);
	s=a;
	if(b<a&&b<c&&b<d) s=b;
	else if(c<a&&c<b&&c<d) s=c;
	else if(d<a&&d<b&&d<c) s=d;
	for(i=1;i<=n;i++)
	{
		if(i/s>0&&(i%a==0||i%b==0||i%c==0||i%d==0)) count++;
	}
	printf("%ld",count);
}
