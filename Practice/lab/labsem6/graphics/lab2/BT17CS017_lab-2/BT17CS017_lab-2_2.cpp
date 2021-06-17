#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int gd=0,gm,x1,y1,x2,y2,angle;
    double s,c;
    initgraph(&gd, &gm, NULL);
    printf("Enter coordinates: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    cleardevice();
    line(x1,y1,x2,y2);
    angle = 40;
    c = cos(-angle *3.14/180);
    s = sin(-angle *3.14/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    line(x1, y1 ,x2, y2);
    getch();
return 0;
}
