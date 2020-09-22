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
int c=0;
node* insert(node * root,int d){
    if(root==NULL) return new node(d);
    
    if(d<=root->data) root->left=insert(root->left,d);
    else c+=(root->data),root->left=insert(root->left,d);
    return root;
}
long long solve(int A[], int n)
{
	node * root=NULL;
    for(int i=0;i<n;i++) root=insert(root,A[i]);
    return c;
}
main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin>>n;
	    int A[n];
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
	}
}
