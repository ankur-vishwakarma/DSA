struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
int i;
Node * build(int in[],int pre[], int n,int strt,int end){
    if(strt>end) return NULL;
    i++;
    if(i>=n) return NULL;
    //cout<<pre[i]<<" "<<strt<<" "<<end<<endl;
    int curr=pre[i],j;
    Node * root=new Node(curr);
    if(strt==end){
        root->left=root->right=NULL;
        return root;
    }
    //search this in inorder to know where to branch
    for(j=0;in[j]!=curr;j++);
    //cout<<j<<endl;
    
    root->left=build(in,pre,n,strt,j-1);
    root->right=build(in,pre,n,j+1,end);
    return root;
}
Node* buildTree(int in[],int pre[], int n)
{
    i=-1;
    return build(in,pre,n,0,n-1);
}
