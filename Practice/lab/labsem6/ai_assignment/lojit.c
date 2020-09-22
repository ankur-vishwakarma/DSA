#include<stdio.h>
const int n=100;
void dfs(int m,int  g[][n],int *vis,int source){
	printf("%d ",source);
	vis[source]=1;
	int i;
	for(i=0;i<m;i++){
		if(!vis[i]&&g[source][i]) dfs(m,g,vis,i);
	}
}
main(){
	int m;
	printf("Enter number of vertices\n");
	scanf("%d",&m);
	int graph[m][n],i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			graph[i][j]=0;
		}
	}
	printf("enter edge count\n");
	int q;
	scanf("%d",&q);
	printf("enter q edges in a,b way\n");
	for(i=0;i<q;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		graph[a][b]=graph[b][a]=1;
	}
	/*for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ",graph[i][j]);
		}
		printf("\n");
	}*/
	int visited[m];
	for(i=0;i<m;i++) visited[i]=0;
	//assuming connected graph
	dfs(m,graph,visited,0);
}
