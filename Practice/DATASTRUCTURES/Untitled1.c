#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int val){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
		return;
	}
	struct node* traverse=head;
	while(traverse->next!=NULL) traverse=traverse->next;
	temp->next=NULL;
	traverse->next=temp;
}
void print()
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void dlte(){
	struct node * ptr=head,*preptr=head;
	while(ptr->next!=NULL){
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
}
main()
{
	head=NULL;
	insert(3);
	insert(4);
	insert(5);
	print();
	dlte();
	print();
}
