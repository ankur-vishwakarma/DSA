#include<bits/stdc++.h>
using namespace std;
const int n=100;
void dfs(int m,int  g[][n],int *vis,int src){
	cout<<src<<" ";
	vis[src]=1;
	for(int i=0;i<m;i++){
		if(!vis[i]&&g[src][i]) dfs(m,g,vis,i);
	}
}
main(){
	int m;
	cout<<"Enter number of vertices\n";
	cin>>m;
	int graph[m][n]={};
	cout<<"enter edge count\n";
	int q;
	cin>>q;
	cout<<"enter q edges between a,b if exists\n";
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		graph[a][b]=graph[b][a]=1;
	}
	int * visited=new int[n]{0};
	//dfs for connected graph
	cout<<"DFS explores\n";
	dfs(m,graph,visited,0);
}
