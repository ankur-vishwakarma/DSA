#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* prev;
	struct node* next;
};
struct node* head;
void insert(int val)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	if(head==NULL){
		head=temp;
		temp->next=NULL;
		temp->prev=NULL;
		return;
	}
	struct node * p=head;
	while(p->next!=NULL) p=p->next;
	p->next=temp;
	temp->prev=p;
	temp->next=NULL;
}
void rem()
{
	struct node* p=head,*pre;
	while(p->next!=NULL)
	{
		pre=p;
		 p=p->next;
	}
	pre->next=NULL;
	free(p);
}
void display()
{
	struct node* p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void displayback()
{
	struct node* p=head;
	while(p->next!=NULL) p=p->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->prev;
	}
	printf("\n");
}
main()
{
	head=NULL;
	insert(2);
	insert(4);
	insert(5);
	display();
	rem();
	displayback();
}
