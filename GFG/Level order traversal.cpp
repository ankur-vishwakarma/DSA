
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

vector<int> levelOrder(Node* node)
{
  queue<Node *> levels;
  vector<int> order;
  levels.push(node);
  while(!levels.empty()){
      Node * f=levels.front();
      levels.pop();
      order.push_back(f->data);
      if(f->left!=NULL) levels.push(f->left);
      if(f->right!=NULL) levels.push(f->right);
  }
  return order;
}

