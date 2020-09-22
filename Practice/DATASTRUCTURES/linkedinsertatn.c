#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node * head;
void insert(int val,int n)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	if(n==1)
	{
		temp->next=head;
		head=temp;
		return;
	}
	struct node* ptr=head;
	int i;
	for(i=2;i!=n;i++) ptr=ptr->next;
	temp->next=ptr->next;
	ptr->next=temp;
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
	printf("\n");
	insert(5,1);
	print();
}
