#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> *g,int src,stack<int> & f,int *vis){
	cout<<src+1<<" ";
	vis[src]=1;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			//cout<<g[src][i]+1<<"in ";
		    dfs(g,g[src][i],f,vis);
	    }
	}
	f.push(src);
}
void dfs2(vector<int> *g,int *vis,int src){
	vis[src]=1;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]) dfs2(g,vis,g[src][i]);
	}
}
int ssc(vector<int> *g,vector<int> *gt,int *parent,int n){
	int * vis=new int[n]{0};
	stack<int> f;
	
	int count=0;
	//dfs1
	for(int i=0;i<n;i++){
		if(parent[i]==-1){
			dfs(g,i,f,vis);
			//cout<<endl;
			count++;
		}
	}
	for(int i=0;i<n;i++){
		if(!vis[i]){
			dfs(g,i,f,vis);
			cout<<endl;
			count++;
		}
	}
	/*stack<int> print=f;
	while(!print.empty()){
		cout<<print.top()<<" ";
		print.pop();
	}*/
	//dfs2
	/*int * vis2=new int[n]{0};
	while(!f.empty()){
		int ele=f.top();
		f.pop();
		if(vis2[ele]) continue;
		cout<<vis2[ele]<<endl;
		dfs2(gt,vis2,ele);
		count++;
	}*/
	return count;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int * parent=new int[n];
		for(int i=0;i<n;i++) parent[i]=-1;
		vector<int> *g=new vector<int>[n];
		vector<int> *gt=new vector<int>[n];
		for(int i=0;i<m;i++){
			int j,k;
			cin>>j>>k;
			parent[k-1]=j-1;
			g[j-1].push_back(k-1);
			gt[k-1].push_back(j-1);
		}
		cout<<ssc(g,gt,parent,n);
	}
}
/*
1
9
8
1 2
2 3
5 3
4 1
6 7
5 6
7 8
9 7
*/
