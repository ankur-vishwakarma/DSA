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
void level_ord(node * root){
	if(root==NULL) return;
    queue<node *> q; int flag=0;   //node * type queue
	stack <node*> s;
    q.push(root); q.push(NULL);
    while(!q.empty()){
    	node * f=q.front();
    	q.pop();
    	if(f==NULL){
    		if(flag){
    		   flag=0;
    		   //lets print the stack
    		   while(!s.empty()) cout<<s.top()->data<<" ",s.pop();
			}
    		else flag=1;
    		
    		if(!q.empty()) q.push(NULL);
    		continue;
		}
		//flag=0 lets print normally
		if(flag==0) cout<<f->data<<" ";
		//else we will first store them in stack till NULL n thn print in NULL check
		else s.push(f);
		
		if(f->left!=NULL) q.push(f->left);
		if(f->right!=NULL) q.push(f->right);
	}
}
void preorder(node * root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
main(){
	node * root=buildtree();
	preorder(root);
	cout<<endl;
	level_ord(root);
}
