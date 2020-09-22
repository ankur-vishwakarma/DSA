#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node * next;
};
struct node * head;
void push(int d){
	struct node * temp=(struct node *)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=head;
	head=temp;
}
int leng(struct node* buf){
	int l=0;
	while(buf!=NULL) buf=buf->next,l++;
	return l;
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
			push(b);
		}
		cout<<leng(head)<<endl;
	}
}
