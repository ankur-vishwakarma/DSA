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
node * buildtree(int * pre,int * in,int s,int e){
	static int i=0;
	//cout<<s<<" "<<e<<" "<<i<<endl;
	if(s>e) return NULL;
	node * root=new node(pre[i]);
	int index;
	for(int j=s;j<=e;j++) if(pre[i]==in[j]){ index=j; break;}
	i++; //check
	root->left=buildtree(pre,in,s,index-1);
	root->right=buildtree(pre,in,index+1,e);
	return root;
}
void preorder(node * root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int m=0;
int check_bst(node * root){
	if(root==NULL) return 0;
	int l=check_bst(root->left);
	int r=check_bst(root->right);
	bool ld=true,rd=true;
	if(root->left!=NULL){
		ld=root->data>root->left->data;
	}
	if(root->right!=NULL){
		rd=root->data<root->right->data;
	}
	//cout<<root->data<<"d "<<ld<<" "<<rd<<endl;
	if(ld&&rd){
		m=max(m,1+l+r);
		return 1+l+r;
	}
	else{
		m=max(m,max(l,r));
		return 0;
	}
}
main(){
	int n;
	cin>>n;
	int pre[n],in[n];
	for(int i=0;i<n;i++) cin>>pre[i];
	for(int i=0;i<n;i++) cin>>in[i];
	node * root=buildtree(pre,in,0,n-1);
	//preorder(root);
	check_bst(root);
	cout<<m;
}
