#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data) 
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
struct node* insert(struct node* node, int data) 
{
    
    if(node == NULL)return(newNode(data)); 
    else
    {
        if (data <= node->data)node->left = insert(node->left, data);
        else node->right = insert(node->right, data);
        return node; 
    }
}
int minValue(struct node* root);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, tmp;
        cin>>n>>tmp;
        struct node* root = NULL;
        root = insert(root, tmp);
        n--;
        while(n--){
            cin>>tmp;
            insert(root, tmp);
        }
        cout<<minValue(root)<<endl;
    }
return 0; 
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the binary search tree is as
struct node 
{
	int data;
	struct node* left;
	struct node* right;
};
*/
// your task is to complete the below function
int minValue(struct node* root)
{
    struct node * ptr=root;
    while(ptr->left!=NULL){
        ptr=ptr->left;
    }
    return ptr->data;
}
