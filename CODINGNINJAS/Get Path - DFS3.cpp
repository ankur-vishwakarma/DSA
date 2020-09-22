#include<bits/stdc++.h>
using namespace std;
bool helper(int **g,int v,int *vis,int *parent,int par,int a,int b){
	//cout<<par<<" "<<a<<" "<<b<<endl;
	if(a==b){
		parent[b]=par;
		return true;
	}
	vis[a]=1;
	parent[a]=par;
	for(int i=0;i<v;i++){
		if(g[a][i]==1&&!vis[i]){
			if(helper(g,v,vis,parent,a,i,b)) return true;
		}
	}
	return false;
}
void dfs(int **g,int v,int a,int b){
	int * vis=new int[v]{0};
	int * parent=new int[v]{0};
	vis[a]=1;
	parent[a]=a;
	int flag=0;
	for(int i=0;i<v;i++){
		if(g[a][i]==1&&!vis[i]){
			if(helper(g,v,vis,parent,a,i,b)){
			flag=1;
			break;
		    }
		}
	}
	if(flag){
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
	dfs(g,v,a,b);
}
