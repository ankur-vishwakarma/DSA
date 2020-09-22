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
	int k;
	cout<<"Enter number of vertices\n";
	cin>>k;
	int graph[k][n]={};
	cout<<"enter edges number\n";
	int q;
	cin>>q;
	cout<<"enter edges in u,v terms\n";
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		graph[x][y]=graph[y][x]=1;
	}
	int * visited=new int[n]{0};
	cout<<"DFS of above connected graph is\n";
	dfs(k,graph,visited,0);
}
