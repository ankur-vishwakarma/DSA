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
void preorder(node * root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
bool compare(node *tree1,node *tree2){
	//cout<<tree1->data<<" "<<tree2->data<<endl;
	if(tree1==NULL&&tree2==NULL) return true;
	if((tree1==NULL&&tree2!=NULL)||(tree1!=NULL&&tree2==NULL)) return false;
	if(tree1->data!=tree2->data) return false;
	bool l=compare(tree1->left,tree2->left);
	bool r=compare(tree1->right,tree2->right);
	if(tree1->data==tree2->data&&l&&r) return true;
	return false;
}
main(){
	node * tree1=buildtree();
	//preorder(tree1);
	node * tree2=buildtree();
	//preorder(tree2);
    if(compare(tree1,tree2)) cout<<"true";
    else cout<<"false";
}
