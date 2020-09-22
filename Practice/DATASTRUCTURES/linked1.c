#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
};
struct node * head;
void insert(int val,int n)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(n==1)
	{
		head=temp;
		return;
	}
	struct node* access=head;
	int i;
	for(i=0;i<n-2;i++) access=access->next;
	access->next=temp;
}
void dlte(){
	struct node * ptr=head,*preptr;
	while(ptr->next!=NULL){
		preptr=ptr;
		 ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
}
void print ()
{
	struct node* access=head;
	while(access!=NULL)
	{
		printf("%d ",access->data);
		access=access->next;
	}
}
main()
{
	head=NULL;
	insert(3,1);
	insert(4,2);
	print();
	insert(5,1);
	print();
	dlte();
	print();
}
