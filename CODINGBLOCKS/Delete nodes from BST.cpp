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
node * insert(node * root,int d){
	if(root==NULL) return new node(d);
	if(d<=root->data) root->left=insert(root->left,d);
	else root->right=insert(root->right,d);
	return root;
}
node * del(node * root,int d){
	if(root==NULL) return NULL;
	if(d<root->data) root->left=del(root->left,d);
	else if(d>root->data) root->right=del(root->right,d);
	else{
		//no child
		if(root->left==NULL&&root->right==NULL){
			free(root);
			return NULL;
		}
		//single child
		//1.left
		if(root->left!=NULL&&root->right==NULL){
			node * temp=root->left;
			free(root);
			return temp;
		}
		//2.right
		if(root->left==NULL&&root->right!=NULL){
			node * temp=root->right;
			free(root);
			return temp;
		}
		//two children
	    //will replace node with inorder predecessor
	    node * ip=root->left;
	    while(ip->right!=NULL) ip=ip->right;
	    //swap
	    int tmp=root->data;
	    root->data=ip->data;
	    ip->data=tmp;
	    root->left=del(root->left,d);
	    return root;
	}
	return root;
}
void preorder(node * root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int a,k;
		cin>>a;
		node * root=NULL;
		for(int i=0;i<a;i++){
			cin>>k;
			root=insert(root,k);
		}
		//preorder(root);
		//cout<<endl;
		int b;
		cin>>b;
		int s[b];
		for(int i=0;i<b;i++) cin>>s[i];
		for(int i=0;i<b;i++){
			root=del(root,s[i]);
		}
		preorder(root);
	}
}
