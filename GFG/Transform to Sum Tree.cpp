/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int sum(Node *root){
    if(root==NULL) return 0;
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    int tmp=root->data;
    root->data=leftsum+rightsum;
    return tmp+root->data;
}
void toSumTree(Node *node)
{
    sum(node);
}


