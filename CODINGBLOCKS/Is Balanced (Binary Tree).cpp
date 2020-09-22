#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node * left;
	node * right;
};
node* buildtree(){
	int d;
	cin>>d;
	node * root=(node *)malloc(sizeof(node));
	root->data=d;
	root->left=NULL,root->right=NULL;
	string l,r;
	cin>>l;
	if(l== "true") root->left=buildtree();
	cin>>r;
	if(r== "true") root->right=buildtree();
	return root;
}
pair<int,bool> is_balanced(node * root){
	pair<int,bool> p;
	if(root==NULL){
		p.first=0;
		p.second=true;
		return p;
	}
	pair<int,bool> l=is_balanced(root->left);
	pair<int,bool> r=is_balanced(root->right);
	p.first=1+max(l.first,r.first);
	if(abs(l.first-r.first)<=1&&l.second&&r.second) p.second=true;
	else p.second=false;
	return p;
}
main(){
	node * root=buildtree();
	pair<int,bool> p=is_balanced(root);
	if(p.second) cout<<"true";
	else cout<<"false";
	
}
