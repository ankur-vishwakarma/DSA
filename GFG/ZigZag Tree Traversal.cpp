vector <int> zigZagTraversal(Node* root)
{
	queue <Node*> q;
	vector<vector<int> > tmp;
	
	q.push(root);
	q.push(NULL);
    vector<int> a;
    while(!q.empty()){
        Node* f=q.front();
        q.pop();
        
        if(f==NULL){
            if(!q.empty()){
                tmp.push_back(a);
                a.clear();
                q.push(NULL);
            }
            continue;
        }
        
        a.push_back(f->data);
        /*cout<<f->data<<" ";
        for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
        cout<<endl;*/
        if(f->left!=NULL) q.push(f->left);
        if(f->right!=NULL) q.push(f->right);
    }
    tmp.push_back(a);
    a.clear();
    //cout<<tmp.size();
    for(int i=0;i<tmp.size();i++){
        if(i%2==0){ //push l to right
            for(int j=0;j<tmp[i].size();j++) a.push_back(tmp[i][j]);
        }else{
            for(int j=tmp[i].size()-1;j>=0;j--) a.push_back(tmp[i][j]);
        }
    }
    
    return a;
}
