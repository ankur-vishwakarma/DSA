#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX,cnt=0;
void dfs(int **g,int src,int * vis,int n){
	if(src==n){
		ans=min(ans,cnt);
		return;
	}
	cnt++; vis[src]=1;
	for(int i=1;i<=n;i++){
		if(g[src][i]&&!vis[i]) dfs(g,i,vis,n);
	}
	cnt--;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int ** g=new int *[n+1];
		for(int i=1;i<=n;i++) g[i]=new int[n+1]{0};
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			g[a][b]=g[b][a]=1;
		}
		int * vis=new int[n+1]{0};
		//int count=0;
		dfs(g,1,vis,n);
		cout<<ans<<endl;
	}
}
