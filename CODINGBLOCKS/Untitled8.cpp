#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node * left;
		node * right;
	
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node * insert(node *root,int d){
	if(root==NULL) return new node(d);
	else if(d<=root->data) root->left=insert(root->left,d);
	else root->right=insert(root->right,d);
	return root;
}
void preorder(node * root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int sum_bst(node * root){
	if(root==NULL) return 0;
	int ls=sum_bst(root->left);
	int rs=sum_bst(root->right);
	root->data=root->data+ls+rs;
	return root->data;
}
main(){
	int n,b;
	cin>>n;
	node * root=NULL;
	for(int i=0;i<n;i++){
		cin>>b;
		root=insert(root,b);
	}
	preorder(root);
	cout<<endl;
	sum_bst(root);
	preorder(root);
	cout<<endl;
}
