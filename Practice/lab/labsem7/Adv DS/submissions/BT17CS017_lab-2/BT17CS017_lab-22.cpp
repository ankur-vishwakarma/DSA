#include<bits/stdc++.h>
using namespace std;

//Declaring node as a DS
class node{
	public:
	int data;
	node *left,*right;
	
	node(int key){
		data=key;
		left=right=NULL;
	}
};

//Searches for key 
bool search(node* tree,int key){
	if(tree==NULL) return false;
	if(tree->data==key) return true;
	else if(key<tree->data) search(tree->left,key);
	else search(tree->right,key);
}

node * insert_helper(node *tree,int key){
	if(tree==NULL) return new node(key);
	else if(key<tree->data) tree->left=insert_helper(tree->left,key);
	else tree->right=insert_helper(tree->right,key);
	return tree;
}


node * insert(node *tree,int key){
	bool present =search(tree,key);
	if(present){    //if value already present raise an exception
		cout<<"$ EXCEPTION: Value already present in the tree!\n";
		return tree;
	}
	else return insert_helper(tree,key);
}

//display
void preorder(node *tree){
	if(tree==NULL) return;
	cout<<tree->data<<" ";
	preorder(tree->left);
	preorder(tree->right);
}

void inorder(node *tree){
	if(tree==NULL) return;
	inorder(tree->left);
	cout<<tree->data<<" ";
	inorder(tree->right);
}

void postorder(node *tree){
	if(tree==NULL) return;
	postorder(tree->left);
	postorder(tree->right);
	cout<<tree->data<<" ";
}


int height(node *tree){
	if(tree==NULL) return 0;
	//if(tree->left==NULL&&tree->right==NULL) return 0;
	return 1+max(height(tree->left),height(tree->right));    //include current node and max(left subtree,right subtree) this returns hieght one greater than actual we handle later
}

pair<bool,int> is_balanced(node *tree){     //we use post order traversal for balance check, and keep returning information to parent for decision
	if(tree==NULL) return {true,0};
	pair<bool,int> l=is_balanced(tree->left);
	pair<bool,int> r=is_balanced(tree->right);
	//cout<<tree->data<<" "<<abs(l.second-r.second)<<" "<<l.second<<" "<<r.second<<endl;
	if(abs(l.second-r.second)<=1&&l.first&&r.first) return {true,1+max(l.second,r.second)};
	else return {false,1+max(l.second,r.second)};
}

node * delete_node(node*tree,int key){
	if(tree->data==key){
		//No children
		if(tree->left==NULL&&tree->right==NULL) return NULL;
		
		//both children - lets find inorder predessesor  && replace currents data with it n delete the pred
		else if(tree->left!=NULL&&tree->right!=NULL){
			node *pred=tree->left;
			while(pred->right!=NULL) pred=pred->right;
			//cout<<pred->data<<endl;
			tree->data=pred->data;
			tree->left= delete_node(tree->left,pred->data);
		}
		
		//single children
		else{
			if(tree->left!=NULL) return tree->left;
			else return tree->right;
		}
	}
	else if(key<tree->data) tree->left=delete_node(tree->left,key),cout<<tree->data<<"l ";
	else tree->right=delete_node(tree->right,key);
	return tree;
}
main(){
	node * tree=NULL;
	string option="EXIT";
	cout<<"$ Please enter a command. Type HELP for getting list of commands.\n";
	cin>>option;
	while(option!="EXIT"){
		if(option=="INSERT"){
			cout<<"$ Enter Key to Insert.\n";
			int key;
			cin>>key;
			if(cin.fail()){
				cout<<"ERROR: Please Enter an Integer!\n";
				cin.clear();
				cin.ignore();
			}
			else tree=insert(tree,key);
			
		}
		else if(option=="SEARCH"){
			cout<<"$ Enter Key to be searched.\n";
			int key;
			cin>>key;
			if(cin.fail()){
				cout<<"ERROR: Please Enter an Integer!\n";
				cin.clear();
				cin.ignore();
			}
			else{
				bool present =search(tree,key);
				if(present) cout<<"$ Key is PRESENT in tree\n";
				else cout<<"$ Key is NOT present in tree\n";	
			}
		}
		else if(option=="DELETE"){
			cout<<"$ Enter Key to be deleted.\n";
			int key;
			cin>>key;
			bool present =search(tree,key);
			if(present) tree=delete_node(tree,key);
			else cout<<"$ EXCEPTION: Key to be deleted is not present in tree!";
		}
		else if(option=="DISPLAY"){
			cout<<"$ PRE-ORDER: ";
			preorder(tree);
			cout<<endl;
			cout<<"$ IN-ORDER: ";
			inorder(tree);
			cout<<endl;
			cout<<"$ POST-ORDER: ";
			postorder(tree);
			cout<<endl;
			
			cout<<"$ HIEGHT: "<<height(tree)-1<<endl;
			
			cout<<"$ BALANCED: ";
			bool bal=is_balanced(tree).first;
			if(bal) cout<<"true"<<endl;
			else cout<<"false"<<endl;
			
		}
		else if(option=="HELP"){
			cout<<"Following are valid commands!\n";
			cout<<"INSERT - to insert key.\n";
			cout<<"SEARCH - to search key.\n";
			cout<<"DELETE - to delete key.\n";
			cout<<"DISPLAY - to display tree.\n";
			cout<<"EXIT - to exit.\n";
		}
		cout<<"$ Please enter a command. Type HELP for getting list of commands.\n";
		cin>>option;
	}
}
