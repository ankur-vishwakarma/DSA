#include<bits/stdc++.h>
using namespace std;
void dfs_helper(int **g,int *vis,int src,int n){
	cout<<src<<" ";
	vis[src]=1;
	for(int i=0;i<n;i++){
		if(!vis[i]&&g[src][i]) dfs_helper(g,vis,i,n);
	}
}
void dfs(int **g,int n){
	int * visited=new int[n]{0};
	//lets assume graph is not connected
	int count=1;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			cout<<"component :"<<count<<endl;
			dfs_helper(g,visited,i,n);
			cout<<endl;
			count++;
		}
		
	}
}
main(){
	int n;
	cout<<"enter no of vertices\n";
	cin>>n;
	//followed zero-based indexing
	int ** g=new int *[n];
	for(int i=0;i<n;i++) g[i]=new int[n]{0};
	cout<<"enter no of edges\n";
	int m;
	cin>>m;
	cout<<"enter edges";
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		g[a][b]=g[b][a]=1;
	}
	dfs(g,n);
}
