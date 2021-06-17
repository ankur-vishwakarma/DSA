#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream>
using namespace std;
int main()

{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    cout<<"Enter center coordinates: ";
    int x, y, radius;
    cin>>x>>y;
    cout<<"Enter radius: ";
    cin>>radius;
    circle(x,y,radius);  //inbuilt function to create circle
    
    //using the coordinate properties 
    line(x+radius, y+radius, x+radius, y-radius);	//line right
    line(x+radius, y+radius, x-radius, y+radius);	//line above
    line(x-radius, y-radius, x-radius, y+radius);	//line left
    line(x-radius, y-radius, x+radius, y-radius);	//line bottom
    getch();
    closegraph();

}
