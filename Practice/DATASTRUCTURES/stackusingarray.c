#include<stdio.h>
#define SIZE 10
int stk[SIZE];
int top=-1;
void push(int val)
{
	if(top==SIZE-1) printf("stack is full");
	else stk[++top]=val;
}
void pop()
{
	if(top==-1) printf("stack is empty");
	else top--;
}
void display()
{
	int flag=top;
	while(flag!=-1)
	{
		 printf("%d ",stk[flag]);
		 flag--;
	}
	printf("\n");
}
main()
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
			       push(value);
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
		}
	}
}
