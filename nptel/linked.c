#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
void print(struct node *ad1)
{
	while(ad1!=NULL)
	{
		printf("%d\n",ad1->data);
		ad1=ad1->next;
	}
}
int main()
{
    struct node * head=NULL, *first=NULL, *scnd=NULL;
    int s=sizeof(struct node);
    head = (struct Node*)malloc(s); 
    first= (struct Node*)malloc(s);
    scnd= (struct Node*)malloc(s);
    
    head->next=first, first->next= scnd, scnd->next=NULL;
    head->data=1,first->data=2,scnd->data= 3;
    
    print(head);
    
}
