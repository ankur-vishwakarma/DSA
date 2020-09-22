#include<bits/stdc++.h>
using namespace std;
void dfs(int **g,int *vis,int src,int n){
	cout<<src<<" ";
	vis[src]=1;
	for(int i=0;i<n;i++){
		if(!vis[i]&&g[src][i]) dfs(g,vis,i,n);
	}
}
main(){
	int n;
	cout<<"Enter vertices number\n";
	cin>>n;
	int ** g=new int *[n];
	for(int i=0;i<n;i++) g[i]=new int[n]{0};
	cout<<"enter edge count\n";
	int q;
	cin>>q;
	cout<<"enter edges in form of a,b if edge exists between a,b\n";
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		g[a][b]=g[b][a]=1;
	}
	int * visited=new int[n]{0};
	//assuming graph as connected
	cout<<"DFS of above graph is\n";
	dfs(g,visited,0,n);
}
