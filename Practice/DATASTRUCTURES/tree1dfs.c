#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node * root =NULL;
void insertleft(struct node*,struct node*);
void insertright(struct node*,struct node*);
void disp(struct node* root);
void insert(int val){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
		temp->data=val;
		temp->left=NULL;
		temp->right=NULL;
	if(root==NULL) root=temp;
	else{
		if(temp->data<root->data){
			if(root->left==NULL) root->left=temp;
			else{ 
				struct node* ptr=root;
				while(ptr->left!=NULL&&ptr->right!=NULL){
					if(temp->data<ptr->data) ptr=ptr->left;
					else ptr=ptr->right;
					//printf("%dinloop\n",ptr->data);
				}
				if(temp->data<ptr->data) ptr=ptr->left;
				else ptr=ptr->right;
				printf("%dhh\n",ptr->data);
				if(temp->data<ptr->data) ptr->left=temp;
				else ptr->right=temp;
			}
		}
		else{
			if(root->right==NULL) root->right=temp;
			else{
				struct node* ptr=root;
				while(ptr->left!=NULL&&ptr->right!=NULL){
					if(temp->data<ptr->data) ptr=ptr->left;
					else ptr=ptr->right;
				}
					if(temp->data<ptr->data) ptr=ptr->left;
				else ptr=ptr->right;
				printf("%dkk\n",ptr->data);
				if(temp->data<ptr->data) ptr->left=temp;
				else ptr->right=temp;
			}
		}
	}
	//displ(root);
	//printf("\n");
}
void insert1(int k){
	struct node * temp=(struct node*)malloc(sizeof(struct node));
	temp->data=k;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL) root=temp;
	else if(temp->data<root->data&&root->left==NULL) root->left=temp;
	else if(temp->data>root->data&&root->right==NULL) root->right=temp;
	else{
		struct node* ptr=root,*preptr;
		while(ptr!=NULL){
			preptr=ptr;
			if(temp->data<ptr->data) ptr=ptr->left;
			else ptr=ptr->right;
			//printf("%dloop\n",preptr->data);
		}
		printf("%dptrd\n",preptr->data);
     	if(temp->data<preptr->data) preptr->left=temp;
		else preptr->right=temp;	
	}
}
/*void insertleft(struct node* temp,struct node* root){
	if(temp->data<root->data){
		if(root->left==NULL) root->left=temp;
		else insertleft(temp,root->left);
	}
	else{
			if(root->right==NULL) root->right=temp;
			else insertright(temp,root->right);
}
}
void insertright(struct node* temp,struct node* root){
	if(temp->data<root->data){
		if(root->left==NULL) root->left=temp;
		else insertleft(temp,root->left);
	}
	else{
			if(root->right==NULL) root->right=temp;
			else insertright(temp,root->right);
}
}*/
void search(int val){
	int l=0;
	struct node * ptr=root;
	while(ptr!=NULL){
		if(ptr->data==val){
			printf("element found at level %d\n",l);
			return;
		}
		if(val<ptr->data) ptr=ptr->left;
		else ptr=ptr->right;
	l++;
	}
	printf("element not found\n");
}
void disp(struct node* root){
	printf("%d ",root->data);
	if(root->left!=NULL) disp(root->left);
	if(root->right!=NULL) disp(root->right);
}
main(){
	insert1(45);
	insert1(39);
	insert1(56);
	insert1(12);
	insert1(34);
	insert1(78);
	insert1(32);
	insert1(10);
	insert1(89);
	insert1(54);
	insert1(67);
	insert1(81);
	printf("displaying in dfs format\n");
	disp(root);
	search(54);
	search(57);
}
