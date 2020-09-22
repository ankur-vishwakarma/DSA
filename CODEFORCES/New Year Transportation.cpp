#include<bits/stdc++.h>
using namespace std;
bool ** g;
bool dfs_h(int n,int k,int src,int *vis){
	vis[src]=1;
	if(src==k) return true;
	for(int i=1;i<=n;i++){
		if(g[src][i]&&!vis[i]){
			if(dfs_h(n,k,i,vis)) return true;
		}
	}
	return false;
}
bool dfs(int n,int k,int src){
	int *vis=new int[n+1]{0};
	bool ans=dfs_h(n,k,src,vis);
	return ans;
}
main(){
	int n,t;
	cin>>n>>t;
	g=new bool *[n+1];
	for(int i=0;i<=n;i++) g[i]=new bool [n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) g[i][j]=false;
	}
	int buf;
	for(int i=1;i<n;i++){
		cin>>buf;
		g[i][i+buf]=true;
	}
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<g[i][j]<<" ";
		cout<<endl;
	}*/
	bool ans=dfs(n,t,1);
	for(int i=0;i<=n;i++) delete g[i];
	delete [] g;
	if(ans) cout<<"YES\n";
	else cout<<"NO\n";
}
