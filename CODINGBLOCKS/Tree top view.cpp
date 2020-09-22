#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node * left;
		node * right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
/*node * build(){
	int d;
	cin>>d;
	if(d==-1) return NULL;
	node * root=new node(d);
	root->left=build();
	root->right=build();
	return root;
}*/

//length of level order unknown
vector<int> tree;
void build(){
	int d;
	cin>>d;
	tree.push_back(d);
	if(d!=-1){
		build(); //left
		build(); //right
	}
	if(d==-1){  //jst to maintain child parent relation i-2*i+1,2*i+2 //CHECK THIS AGAIN not correct if -1 in middle
		tree.push_back(-1);
		tree.push_back(-1);
	}
}
vector< pair<int,int> > v;  //<level,data>
int track_level[10000000]={0}; //refer all items in ths aftr adding or sub 5*10^6
void top_view(int i,int level){
	//cout<<tree[i]<<" "<<level<<endl;
	if(tree[i]==-1) return;
	if(track_level[level+5000000]!=1) v.push_back({level+5000000,tree[i]});
	track_level[level+5000000]=1;            
	top_view(2*i+1,level-1);
	//time to go right
	top_view(2*i+2,level+1);
}
main(){
	build();
	//for(int i=0;i<tree.size();i++) cout<<tree[i]<<" ";
	top_view(0,0);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout<<v[i].second<<" ";
}
