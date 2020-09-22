#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> *g,int src,stack<int> &s,int *vis){
	vis[src]=1;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			s.push(g[src][i]);
			dfs(g,g[src][i],s,vis);
		}
	}
}
bool dfs2(vector<int> *g,int src,int dest,int *vis){
	vis[src]=1;
	if(src==dest) return true;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			bool ans=dfs2(g,g[src][i],dest,vis);
			if(ans) return true;
		}
	}
	return false;
}
main(){
	while(true){
		int n,e;
		cin>>n;
		if(n==0) break;
		cin>>e;
		vector<int> *g=new vector<int>[n+1];
		for(int i=0;i<e;i++){
			int j,k;
			cin>>j>>k;
			g[j].push_back(k);
		}
		vector<int> bottom;
		for(int i=1;i<=n;i++){
			//for(int j=1;j<=n;j++) vis[j]=0;
			int *visited=new int[n+1]{0};
			stack<int> s;
			dfs(g,i,s,visited);
			int flag=0;
			while(!s.empty()){
				int * vis=new int[n+1]{0};
				bool ans=dfs2(g,s.top(),i,vis);
				if(!ans){
					flag=1;
					break;
				}
				s.pop();
			}
			if(flag==0) bottom.push_back(i);
		}
		for(int i=0;i<bottom.size();i++) cout<<bottom[i]<<" ";
		cout<<endl;
	}
}
