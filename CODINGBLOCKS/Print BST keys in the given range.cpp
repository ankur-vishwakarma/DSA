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
void inord_up(node * root,int l,int r){
	if(root==NULL) return;
	inord_up(root->left,l,r);
	if(root->data>=l&&root->data<=r) cout<<root->data<<" ";
	inord_up(root->right,l,r);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,b;
		cin>>n;
		node * root=NULL;
		for(int i=0;i<n;i++){
			cin>>b;
			root=insert(root,b);
		}
		preorder(root);
		cout<<endl;
		int l,r;
		cin>>l>>r;
		inord_up(root,l,r);
		cout<<endl;
	}
}
