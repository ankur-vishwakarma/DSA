#include<bits/stdc++.h>
using namespace std;

class Node {
	
	public:
	int data;
	Node* left;
	Node *right;
  	Node(int d){
  		data = d;
  		left = NULL;
 		right = NULL;
	  }
};
void preorder(Node *root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int fact(){
	if(n==1) return 1;
	return n*fact(n-1);
}
main(){
	Node * root = new Node(1);
	cout<<root->data<<" ";
	Node * n1 = new Node(2);
	Node * n2 = new Node(3);
	Node * n3 = new Node(4);
	Node * n4 = new Node(5);

// setup children
	root->left = n1;
	root->right = n2;
	n1->left = n3;
	n1->right = n4;
	
	preorder(root);
}
