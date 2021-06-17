#include <iostream>
#include <graphics.h>
#include<dos.h>
using namespace std;
//function to draw line
void bsline(int x,int y,int x2,int y2)
{
	int dx,dy,p;
	dx=x2-x;
	dy=y2-y;
	p = 2 * (dy) - (dx); //initial decision parameter
	while(x <= x2)		//iterate while destination point is not crossed
	{
		if(p < 0)   //value negative means d2>d1 y coordinate remains same
		{
			x=x+1;
			y=y;
			p = p + 2 * (dy);
		}
		else		//close to upper pixel so y coordinate changed
		{
			x=x+1;
			y=y+1;
			p = p + 2 * (dy - dx);
		}
		putpixel(x,y,WHITE);		//function to plot pixel
		delay(10);			//delay to see the construction
	}
}
main()
{
	int gd=DETECT,gm;
	char s[]="C:\\Dev-Cpp\\lib";	//path
	initgraph(&gd,&gm,s);  //initialize
	int x1,x2,y1,y2;
	cout<<"Enter the x1,y1,x2,y2 values : ";
	cin>>x1>>y1>>x2>>y2;
	bsline(x1,y1,x2,y2);
	getch();
	closegraph();
}
