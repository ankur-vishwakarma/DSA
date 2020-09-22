#include<stdio.h>
using namespace std;
const int n=100;
void dfs(int m,int  g[][n],int *vis,int source){
	cout<<source<<" ";
	vis[source]=1;
	for(int i=0;i<m;i++){
		if(!vis[i]&&g[source][i]) dfs(m,g,vis,i);
	}
}
main(){
	int m;
	printf("Enter number of vertices\n");
	scanf("%d",m);
	int graph[m][n]={};
	printf("enter edge count\n");
	int q;
	scanf("%d",n);
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		graph[a][b]=graph[b][a]=1;
	}
	int * visited=new int[n]{0};
	//assuming connected graph
	cout<<"DFS\n";
	dfs(n,graph,visited,0);
}
