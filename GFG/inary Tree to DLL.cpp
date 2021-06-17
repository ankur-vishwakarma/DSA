/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
pair<Node*, Node*> solve(Node * root){
    if(root==NULL) return {NULL,NULL};
    pair<Node*, Node*> l=solve(root->left);
    pair<Node*, Node*> r=solve(root->right);
    
    root->left=l.second,root->right=r.first;
    
    if(l.second!=NULL) l.second->right=root;
    else l.first=root;
    
    if(r.first!=NULL) r.first->left=root;
    else r.second=root;
    
    return {l.first,r.second};
}

Node * bToDLL(Node *root)
{
    return solve(root).first;
}


