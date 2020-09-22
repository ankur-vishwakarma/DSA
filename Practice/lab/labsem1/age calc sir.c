#include<stdio.h>
void main(){
int c_d=31,c_m=8,c_y=2017;
int b_d,b_m,b_y;
int a_d, a_m, a_y;
printf("Your date of Birth as Day Month Year");
scanf("%d %d %d",&b_d, &b_m, &b_y);
if(b_y>c_y) printf("Invalid Date");
else{
if(c_m==b_m){
a_m = 0;
a_y = c_y - b_y;
if(c_d>b_d) a_d = c_d-b_d;
else a_d = b_d-c_d;
}
else if(c_m>b_m){
a_m = c_m-b_m;
a_y = c_y-b_y;
}
else if(c_m<b_m){
a_y = c_y-b_y;
a_m = 12-(b_m-c_m);
a_d = b_d;
}
if(b_d<c_d){
a_d = b_d;
}
if(b_d>c_d){
a_m = ((c_m-b_m)-1);
a_d = b_d-(b_d-c_d);
}
}
printf("Age Days = %d Month = %d Year = %d",a_d,a_m,a_y);
}
