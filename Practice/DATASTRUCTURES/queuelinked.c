#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node* front;
struct node* rear;
void insert(int val)
{//linked list is never full so no need to check condition
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(rear==NULL){
		rear=temp;
		front=temp;
		return;
	}
	rear->next=temp;
	rear=temp;
}
void dlte()
{
	if(front==NULL){
		printf("queue empty");
		return;
	}
	struct node* temp=front;
	front=front->next;
	free(temp);
}
void display()
{
	struct node* temp=front;
	while(temp!=rear){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}
main()
{//use while n switch as in nb
	front=NULL;
	rear=NULL;
	insert(2);
	insert(3);
	insert(5);
	insert(4);
	display();
	dlte();
	display();
}
