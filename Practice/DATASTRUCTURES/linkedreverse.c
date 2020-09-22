#include<stdio.h>
struct node{
int data;
struct node* next;	
};
struct node* head;
int flag=0;
void insert(int val)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(flag==0){
		head=temp;
		flag++;
		return;
	}
	int i;
	struct node* access=head;
	for(i=0;i<flag-1;i++) access=access->next;
	access->next=temp;
	flag++;
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
void reverse() //not correct i guess
{
	struct node* current, *prev,*nxt;
	prev=head;
	current=head->next;
	nxt=current->next;
	while(nxt->next!=NULL)
	{
		current->next=prev;
		prev=current;
		current=nxt;
		nxt=nxt->next;
	}	
	head=current;
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
			print();
	}
    reverse();
    print();
}
