#include<stdio.h>
struct node{
	int data;
	struct node * next;
};
struct node * head;
void insert(int val)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	if(head==NULL)
	{
		head=temp;//HAD USED HEAD->NEXT DIDNT WORKED {late write-but i guess u coz u jst declared head didnt give memory as temp {malloc)}
		temp->next=head;
		return;
	}
	struct node * access=head;
	while(access->next!=head)  access=access->next;
	access->next=temp;
	temp->next=head;
}
void delte()
{
	struct node * access=head,*prev;
	while(access->next!=head) 
	{
		prev=access;
		access=access->next;
	}
	prev->next=head;
	free(access);
}
void display()
{
	struct node * access=head;
	while(access->next!=head)
	{
		printf("%d ",access->data);
		access=access->next;
	}
	printf("%d ",access->data);
}
main()
{
	head=NULL;
	insert(2);
	insert(3);
	insert(4);
	display();
	delte();
	display();
}
