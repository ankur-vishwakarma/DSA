#include<stdio.h>
main()
{
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	if(y1==y2) printf("%d %d %d %d",x1,y1+x2-x1,x2,y1+x2-x1);
	else if(x1==x2) printf("%d %d %d %d",x1+y2-y1,y1,x1+y2-y1,y2);
	else if(x2-x1==y2-y1) printf("%d %d %d %d",x2,y1,x1,y2);
	else if(x1-y2==x2-y1) printf("%d %d %d %d",x1,y2,x2,y1);
	else if(y1==-x1&&y1!=0) printf("%d %d %d %d",x2,y1,x1,y2);
	else if(y2==-x2&&y2!=0) printf("%d %d %d %d",x2,y1,x1,y2);
	else printf("-1");
}
