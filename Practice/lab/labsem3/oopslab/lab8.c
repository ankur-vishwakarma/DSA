#include<stdio.h>
#define size 10
int left=-1,right=-1;
int q[size];
void fe(int val){
if(right==size-1){
 printf("overflow");
return;
}
if(left==-1){
left=right=0;
q[right]=val;
}
else{
int i;
for(i=right;i>=0;i--){
 q[i+1]=q[i];
}
q[0]=val;
right++;
}
}
void re(int val){
if(right==size-1){
 printf("overflow");
return;
}
if(left==-1){
left=right=0;
q[right]=val;
}
else q[++right]=val;
}
void fd(){
if(left==-1) printf("underflow");
else{
left++;
if(left>right) left=right=-1;
}
}
void rd(){
if(left==-1) printf("underflow");
else{
right--;
if(right<left) left=right=-1;
}
}
void disp(){
int i;
for(i=left;i<=right;i++) printf("%d ",q[i]);
printf("\n");
}
void main(){
re(3);
re(4);
printf("aftr rear enq");
disp();
fe(2);
printf("aftr frnt enq");
disp();
fd();
printf("aftr frnt deq");
disp();
rd();
printf("aftr rear deq");
disp();
}
