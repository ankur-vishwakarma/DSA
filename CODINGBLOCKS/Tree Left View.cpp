#include<bits/stdc++.h>
using namespace std;

/*int * tree=new int[5000000000];
void build_levelorder(){
	static int i=0;
	int d;
	cin>>d;
    while(tree[i]==-1) i++;
	if(d==-1){
		tree[i]=-1;
		tree[2*i+1]=-1;
		tree[2*i+2]=-1;
		i++;
		return;
	}
	tree[i++]=d;
	build_levelorder();
	build_levelorder();
}*/  //check ths takes extra space although correct


vector<int> tree;
void build(){
	int d;
	cin>>d;
	tree.push_back(d);
	if(d!=-1){
		build(); //left
		build(); //right
	}
	return;
}
void complete(){
	vector<int> v;
	queue <int> nulls;
	for(int i=0;i<tree.size();i++){
		//cout<<nulls.front()<<" "<<i<<endl;
		if(nulls.front()==i){
			v.push_back(-1);
			nulls.pop();
		}
		v.push_back(tree[i]);
		if(tree[i]==-1){
			nulls.push(2*i+1);
			nulls.push(2*i+2);
		}
	}
	//for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	for(int i=tree.size()-1;!nulls.empty();i++){
		//cout<<nulls.front()<<" "<<i<<endl;
		if(nulls.front()==i){
			v.push_back(-1);
			nulls.pop();
		}
	}
	/*for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl;*/
	tree=v;
}
vector< pair<int,int> > v;  //<level,data>
int track_level[100000000]={0};
void left_view(int i,int level){
	//cout<<tree[i]<<" "<<level<<endl;
	if(tree[i]==-1) return;
	if(track_level[level]!=1) v.push_back({level,tree[i]});
	track_level[level]=1;            
    if(2*i+1<tree.size()) left_view(2*i+1,level+1);
	//time to go right
	if(2*i+2<tree.size()) left_view(2*i+2,level+1);
}
main(){
	build();
	//build_levelorder();
	complete();
    //for(int i=0;i<tree.size();i++) cout<<tree[i]<<" ";
	left_view(0,0);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout<<v[i].second<<" ";
}
