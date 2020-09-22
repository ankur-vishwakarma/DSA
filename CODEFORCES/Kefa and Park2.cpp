#include<bits/stdc++.h>
using namespace std;
long long paths=0;
void dfs(vector<int> g[],int n,int m,int * a,int *vis,int src,int count,bool cons){
	//cout<<src<<" "<<count<<" "<<cons<<endl;
	if(g[src].size()==1&&src!=1){
		vis[src]=1;
		if(a[src]) count++;
		if(count<=m) paths++;
		//if(a[src]) count--;
		return;
	}
	vis[src]=1;
	int flag=0;
	if(a[src]) count++,cons=true,flag=1;
	else count=0,cons=false;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			dfs(g,n,m,a,vis,g[src][i],count,cons);
		}
	}
	//if(flag) count--;
}
main(){
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	vector<int> g[n+1];
	int u,v;
	for(int i=0;i<n-1;i++){
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int * vis=new int[n+1]{};
	dfs(g,n,m,a,vis,1,0,false);
	cout<<paths<<endl;
}
