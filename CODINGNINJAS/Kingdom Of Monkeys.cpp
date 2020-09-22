#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> *g,int *vis,int src,int &count,int *a){
	vis[src]=1;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]) count+=a[g[src][i]],dfs(g,vis,g[src][i],count,a);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> *g=new vector<int> [n+1];
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int *vis=new int[n+1]{0};
		int ans=INT_MIN;
		for(int i=1;i<=n;i++){
			int count=0;
			if(!vis[i]) count+=a[i],dfs(g,vis,i,count,a);
			ans=max(ans,count);
		}
		cout<<ans<<endl;
	}
}
