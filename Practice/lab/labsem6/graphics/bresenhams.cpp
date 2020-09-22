#include <iostream>
#include <graphics.h>
#include<dos.h>
using namespace std;
void bsline(int x,int y,int x2,int y2)
{
	int dx,dy,p;
	dx=x2-x;
	dy=y2-y;
	p = 2 * (dy) - (dx);
	while(x <= x2)
	{
		if(p < 0)
		{
			x=x+1;
			y=y;
			p = p + 2 * (dy);
		}
		else
		{
			x=x+1;
			y=y+1;
			p = p + 2 * (dy - dx);
		}
		putpixel(x,y,WHITE);
		delay(10);
	}
}
main()
{
	int gd=DETECT,gm;
	char s[]="C:\\Dev-Cpp\\lib";
	initgraph(&gd,&gm,s);
	int x1,x2,y1,y2;
	cout<<"Enter the x1,y1,x2,y2 values : ";
	cin>>x1>>y1>>x2>>y2;
	bsline(x1,y1,x2,y2);
	getch();
	closegraph();
}
