#include<stdio.h>
main()
{
	long long yc,bc,b,g,y,ycn,bcn;
	scanf("%I64d%I64d",&yc,&bc);
	scanf("%I64d%I64d%I64d",&y,&g,&b);
	ycn=y*2+g,bcn=3*b+g;
	if(ycn-yc>0) ycn=ycn-yc;
	else ycn=0;
	if(bcn-bc>0)  bcn=bcn-bc;
	else bcn=0;
	printf("%I64d",(ycn+bcn));
}
