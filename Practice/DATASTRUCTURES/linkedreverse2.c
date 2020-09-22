#include<stdio.h>
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
void reverse()
{
	struct node *pre,*curr,*nxt;
	curr=head;
	nxt=head->next;
	while(nxt->next!=NULL)
	{
		pre=curr;
		curr=nxt;
		nxt=nxt->next;
		curr->next=pre;
		if(pre==head) pre->next=NULL;
	}
	nxt->next=curr;
	head=nxt;
	printf("REVERSE IS:");
	display();
}
main()
{
    head=NULL;
	printf("enter no of elemnts u wanna insert");
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int k;
		printf("enter element");
		scanf("%d",&k);
		insert(k);
	}
	display();
	reverse();
}
