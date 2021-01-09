//Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

void topviewUtil(struct Node *root,pair<int,int> cols[],int i,int level){
    if(root==NULL) return;
    //cout<<root->data<<" "<<i<<endl;
    topviewUtil(root->left,cols,i-1,level+1);
    topviewUtil(root->right,cols,i+1,level+1);
    if(level<cols[i].second) cols[i].first=(root->data),cols[i].second=level;
    
    return;
}
// function should print the topView of the binary tree
void topView(struct Node *root)
{
    pair<int,int> cols[2005];  //val,level
    for(int i=0;i<2005;i++) cols[i].first=-1,cols[i].second=INT_MAX;
    topviewUtil(root,cols,1000,0);
   // cout<<endl;
    int i=0;
    while(cols[i].first==-1) i++;
   while(cols[i].first!=-1) cout<<cols[i].first<<" ",i++;
}
