#include<stdio.h>
#define size 10
int queue[size];
int left=-1,right=-1;
void enq(int val){
if(left==-1&&right==-1){
left=right=0;
queue[right]=val;
}
else if(right==size-1&&left==0) printf("overflow");
else if(right==size-1&&left!=0){
right=0;
queue[right]=val;
}
else queue[++right]=val;
}
void deq(){
if(left==size-1&&right!=0) left++;
else if(left==-1&&right==-1) printf("underflow");
else if(left<right) left++;
else if(left==right) left=right=-1;
}
void display(){
int i;
if(left<=right) for(i=left;i<=right;i++) printf("%d ",queue[i]);
else{
for(i=left;i<size;i++) printf("%d ",queue[i]);
for(i=0;i<=right;i++) printf("%d ",queue[i]);
}
}
void main()
{
int n=0,value;
	while(n!=4)
	{
		printf("MENU\n1.insert\n2.delete\n3.display\n4exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("enter value u wanna insert:\n");
			       scanf("%d",&value);
			       enq(value);
			       break;
			case 2:deq();
			       break;
			case 3:display();
			       break;
		}
	}
}
 

