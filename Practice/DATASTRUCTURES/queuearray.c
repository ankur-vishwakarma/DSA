#include<stdio.h>
#define size 10
int queue[size];
int front=-1,rear=-1;
void insert(int val)
{
	if(rear==size-1) printf("insertion nt possible");
	else if(rear==-1) 
	{
		front=rear=0;
		queue[rear]=val;
	}
	else queue[++rear]=val;
}
void dlte()
{
	if(front==-1) printf("stack is empty");
	else if(front==size-1) front=rear=-1;
	front++;
}
void display()
{
	//check empty or not
	int i;
	for(i=front;i<=rear;i++) printf("%d ",queue[i]);
	printf("\n");
}
main()
{
	insert(2); //in main use while i.e. print menu and all n switch
	insert(4);
	insert(5);
	display();
	dlte();
	display();
}
