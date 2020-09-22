#include<bits/stdc++.h>
using namespace std;
void dfs(int **g,int n,int *vis,int src){
	cout<<src<<" ";
	vis[src]=1;
	for(int i=0;i<n;i++){
		if(g[src][i]==1&&!vis[i]) dfs(g,n,vis,i);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int **g=new int*[n];
		for(int i=0;i<n;i++) g[i]=new int[n]{0};
		int a,b;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			a--,b--;
			g[a][b]=1;
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<g[i][j]<<" ";
			cout<<endl;
		}*/
		int count=0;
		int vis[n]={0};
		vector<pair<int,int> > par_chi; //pare
		for(int i=0;i<n;i++){
			
		}
		for(int i=0;i<n;i++) if(!vis[i]) count++;
		cout<<count<<endl;
	}
}
