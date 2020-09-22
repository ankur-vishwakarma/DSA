#include<bits/stdc++.h>
using namespace std;
class edge{
	public:
		int u,v,used;
		edge(){
			used=0;
		}
};
int dfs(vector<int> g[],int *vis,int src){
	vis[src]=1;
	int child=0;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			int sm_child=dfs(g,vis,g[src][i]]);
			e[src]
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		edge * e=new edge[n-1];
		
		vector<int> g[n+1];
		for(int i=1;i<n;i++){
			int a,b;
			cin>>a>>b;
			g[a].push_back(b),g[b].push_back(a);
			if(a<b) e.u=a,e.v=b;
			else e.u=b,e.v=a;
		}
		int *vis=new int[n+1]{};
		dfs(g,vis,1);
		
	}
}
