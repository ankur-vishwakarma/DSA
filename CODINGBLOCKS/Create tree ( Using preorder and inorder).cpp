#include<bits/stdc++.h>
using namespace std;
int i=0;
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
node * buildFrmInAndPre(int * pre,int * in,int l,int r){
	if(l>r) return NULL;
	//if(i==n) will we need ths condition
	node * root=new node(pre[i++]);
	//have made a node from pre now search it in inorder array n make recursive calls
	//to newly defined inorder divided into two parts by current search
	int j=-1;
	for(int i=l;i<=r;i++) if(in[i]==root->data){ j=i; break; }
	root->left=buildFrmInAndPre(pre,in,l,j-1);
	root->right=buildFrmInAndPre(pre,in,j+1,r);
	return root;
}
void preorder(node * root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void display_pre(node * root){
	if(root==NULL) return;
	//printing node
	if(root->left!=NULL) cout<<root->left->data<<" => ";
	else cout<<"END => ";
	cout<<root->data;
	if(root->right!=NULL) cout<<" <= "<<root->right->data<<endl;
	else cout<<" <= END\n";
	//left
	display_pre(root->left);
	//right
	display_pre(root->right);
}
main(){
	int n; cin>>n;
	int pre[n];
	for(int i=0;i<n;i++) cin>>pre[i];
	int m; cin>>m;
	int in[m];
	for(int i=0;i<m;i++) cin>>in[i];
	node * root=buildFrmInAndPre(pre,in,0,m-1);
	display_pre(root);
}
