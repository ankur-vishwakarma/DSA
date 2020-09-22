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
void delete(int index)
{
    struct node* temp=head;
    if(index==1)
    {
    	head=temp->next;
    	free(temp);
    	return;
	}
	int i;
	for(i=0;i<index-2;i++) temp=temp->next;
	struct node* hold=temp->next;
	temp->next=hold->next;
	free(hold);
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
    printf("enter no of elements u wannna dlte");
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int k;
		printf("enter number of element u wanna dlte");
		scanf("%d",&k);
		delete(k);
			print();
	}
}
