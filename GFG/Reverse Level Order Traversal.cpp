struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
int height(struct Node* node){
        if(node==NULL) return 0;
        if(node->left==NULL&&node->right==NULL) return 1;
        return 1+max(height(node->left),height(node->right));
    }
vector<int> reverseLevelOrder(Node *root)
{
    queue<Node *> levels;
  vector<int> order;
  stack<vector<int> > hold;
  levels.push(root);
  levels.push(NULL);
  while(!levels.empty()){
      Node * f=levels.front();
      levels.pop();
      if(f==NULL){
          if(!levels.empty()) levels.push(NULL);
          hold.push(order);
          order.clear();
          continue;
      }
      //cout<<f->data<<" ";
      order.push_back(f->data);
      if(f->left!=NULL) levels.push(f->left);
      if(f->right!=NULL) levels.push(f->right);
  }
  order.clear();
  while(!hold.empty()){
      vector<int> tmp=hold.top();
      hold.pop();
      for(int i=0;i<tmp.size();i++) order.push_back(tmp[i]);
  }
  return order; 
}
