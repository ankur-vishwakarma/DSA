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
node * balanced_build(int *s,int strt,int end){
	if(strt>end) return NULL;
	int mid=(strt+end)/2;
	node * root=new node(s[mid]);
	root->left=balanced_build(s,strt,mid-1);
	root->right=balanced_build(s,mid+1,end);
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
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		node * tree=balanced_build(s,0,n-1);
		preorder(tree);
	}
}
