#include<stdio.h>
#include<stdlib.h>
 
/* A linked list node */
struct Node
{
    int data;
    struct Node *next;
};

push(int ad; int v)
{
	static int i=0;
	s
}

pairWiseSwap(struct Node * ptr)
{
	int a=0;
}
printList(struct Node * ptr)
{
		while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
    struct Node *start = NULL;

    int a, x, i;
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        scanf("%d",&x);
        push(&start, x);
    }
 
 
 
    pairWiseSwap(start);
 
    printList(start);
 
    return 0;
}
