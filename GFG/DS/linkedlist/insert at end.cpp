#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node * next;
};
Node* head=NULL;
Node *insertAtEnd(Node *head, int newData)  {
   Node * tmp=(Node *)malloc(sizeof(Node));
   tmp->data=newData;
   tmp->next=NULL;
   Node * it=head;
   if(it==NULL){
   	head=tmp;
   	return head;
   }
   while(it->next!=NULL) it=it->next;
   it->next=tmp;
   return head;
}
void show(Node* head){
	Node * tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
}
Node* deleteNode(Node *head,int x)
{
    Node * p=head,*pp=head;
    x--;
    while(x--){
        pp=p;
        p=p->next;
    }
    pp->next=p->next;
    free(p);
    return head;
}
main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		head=NULL;
		int n,b;
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>b;
			head=insertAtEnd(head,b);
		}
		show(head);
		head=deleteNode(head,2);
		show(head);
	}
}
