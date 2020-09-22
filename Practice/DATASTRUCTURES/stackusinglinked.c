#include<stdio.h>
struct node{
	int data;
	struct node * next;
};
struct node* head;
void insert(int val)
{//linked list so never full no condtion check
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=head;
	head=temp;
}
void pop()
{
	if(head==NULL){
		printf("stack empty");
		return 0;
	}
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(head==NULL) return;
	temp=head;
	head=head->next;
	free(temp);
}
void display(){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
main()
{//use while n all same as i wrote in nb
	head=NULL;
	insert(3);
	insert(4);
	insert(5);
	display();
	pop();
	display();
}
