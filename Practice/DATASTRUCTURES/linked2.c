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
void display()
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
/*void pop(int val)
{
	struct node* temp=head;
	if(head->data==val)
	{
		temp=head;
		head=head->next;
		free(temp);
		return;
	}
	struct node * prev;
	while(temp->data!=val) 
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp->data==val)
	{
		prev->next=temp->next;
		free(temp);
	}
	
}*/
void dlte(){
	struct node * ptr=head,*preptr;
	while(ptr->next!=NULL){
		preptr=ptr;
		 ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
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
			       insert(value);
			       break;
			case 2:dlte();
			       break;
			case 3:display();
			       break;
		}
	}
}
