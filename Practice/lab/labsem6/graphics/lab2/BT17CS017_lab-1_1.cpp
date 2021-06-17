#include<iostream>
#include<graphics.h>
 using namespace std;
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;

	//using mid point circle drawing algo
    while (x >= y)
    {
	
	//we know as circle has 8 ways symmetry
	putpixel(x0 + x, y0 + y, 7);
	putpixel(x0 + y, y0 + x, 7);
	putpixel(x0 - y, y0 + x, 7);
	putpixel(x0 - x, y0 + y, 7);
	putpixel(x0 - x, y0 - y, 7);
	putpixel(x0 - y, y0 - x, 7);
	putpixel(x0 + y, y0 - x, 7);
	putpixel(x0 + x, y0 - y, 7);

	// inside or on the perimeter
	if (err <= 0)
	{
	    y += 1;
	    err += 2*y + 1;
	}
	//is outside the perimeter
	if (err > 0)
	{
	    x -= 1;
	    err -= 2*x + 1;
	}
    }
}

int main()
{
	int gdriver=DETECT, gmode, error, x, y, r;
	initgraph(&gdriver, &gmode, NULL);
	cout<<"Enter the radius of circle: ";
    cin>>r;
	cout<<"enter the center points of the circle: ";
    cin>>x>>y;
	drawcircle(x, y, r);
    getch();
	return 0;
}
