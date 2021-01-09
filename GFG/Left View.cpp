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
void leftViewUtil(Node *root, int * level,int lvl){
    if(root==NULL) return;
    if(level[lvl]==-1) level[lvl]=root->data;
    leftViewUtil(root->left,level,lvl+1);
    leftViewUtil(root->right,level,lvl+1);
    return;
}
// A wrapper over leftViewUtil()
vector<int> leftView(Node *root)
{
   int level[1000];
   memset(level,-1,sizeof(level));
   leftViewUtil(root,level,0);
   int i=0;
   vector<int> ans;
   while(level[i]!=-1) ans.push_back(level[i]),i++;
   return ans;
}


void rightViewUtil(Node *root, int * level,int lvl){
    if(root==NULL) return;
    if(level[lvl]==-1) level[lvl]=root->data;
    rightViewUtil(root->right,level,lvl+1);
    rightViewUtil(root->left,level,lvl+1);
    return;
}
// Should return  right view of tree
vector<int> rightView(Node *root)
{
   int level[10000];
   memset(level,-1,sizeof(level));
   rightViewUtil(root,level,0);
   int i=0;
   vector<int> ans;
   while(level[i]!=-1) ans.push_back(level[i]),i++;
   return ans;
}

