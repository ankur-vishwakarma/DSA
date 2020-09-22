#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data, left_nodes, right_nodes;
	node * left;
	node * right;
};
node * create_balanced(int * s,int strt,int end){
	if(strt>end) return NULL;
	int mid=(strt+end)/2;
	node * curr=new node();
    curr->data=s[mid];
    curr->left=create_balanced(s,strt,mid-1);
    curr->right=create_balanced(s,mid+1,end);
    curr->left_nodes=mid-1-strt+1;
    curr->right_nodes=end-(mid+1)+1;
    return curr;
}
node* insert(node * head,int v){
	if(head==NULL){
		node * curr=new node();
    	curr->data=v;
    	curr->left=curr->right=NULL;
    	curr->left_nodes=curr->right_nodes=0;
    	return curr;
	}
	if(v<=head->data){
		head->left=insert(head->left,v);
		head->left_nodes++;
	}
	else{
		head->right=insert(head->right,v);
		head->right_nodes++;
	}
	return head;
}
void del(node *head,int v){
	if(v<head->data){
		head->left_nodes--;
		del(head->left,v);
	}
	else if(v>head->data){
		head->right_nodes--;
		del(head->right,v);
	}
	else{
		
	}
}
void preorder(node *head){
	if(head==NULL) return;
	cout<<head->data<<" "<<head->left_nodes<<" "<<head->right_nodes<<endl;;
	preorder(head->left);
	preorder(head->right);
}
main(){
	int n,q;
	cin>>n>>q;
	int s[n],t[q];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	node * head=create_balanced(s,0,n-1);
	preorder(head);
	insert(head,6);
	preorder(head);
}
