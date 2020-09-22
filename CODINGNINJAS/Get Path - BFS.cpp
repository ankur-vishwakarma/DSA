#include<bits/stdc++.h>
using namespace std;
void bfs(int **g,int v,int a,int b){
	int *vis=new int[v]{0};
	queue<int> q;
	int *parent=new int[v];
	parent[a]=a;
	vis[a]=1;
	q.push(a);
	int flag=0;
	while(!q.empty()){
		int k=q.front();
		//cout<<k<<" "<<parent[k]<<endl;
		if(k==b){
			flag=1;
			break;
		}
		q.pop();
		for(int i=0;i<v;i++){
			if(g[k][i]==1&&!vis[i]){
				vis[i]=1;
				parent[i]=k;
				q.push(i);
			}
		}
	}
	if(flag==1){
		cout<<b<<" ";
		int i=b;
		while(parent[i]!=a){
			cout<<parent[i]<<" ";
			i=parent[i];
		}
		cout<<a;
	}
}
main(){
	int v,e;
	cin>>v>>e;
	int **g=new int*[v];
	for(int i=0;i<v;i++) g[i]=new int[v]{0};
	int a,b;
	for(int i=0;i<e;i++) cin>>a>>b,g[a][b]=1,g[b][a]=1;
	cin>>a>>b;
	bfs(g,v,a,b);
}
