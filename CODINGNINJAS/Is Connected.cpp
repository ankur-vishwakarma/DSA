#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	list<int> *n;
	
	public:
		graph(int v){
			this->v=v;
			n=new list<int>[v];
		}
		void addedge(int a,int b){
			n[a].push_back(b);
			n[b].push_back(a);
		}
		bool is_connected(int src){
			int * visited=new int[v]{0};
			dfs(src,visited);
			for(int i=0;i<v;i++){
				if(!visited[i]) return false;
			}
			return true;
		}
		void dfs(int src,int * visited){
			visited[src]=1;
			for(int ver:n[src]){
				if(!visited[ver]) dfs(ver,visited);
			}
		}
};
main(){
	int v,e;
	cin>>v>>e;
	int a,b;
	graph g(v);
	for(int i=0;i<e;i++){
		cin>>a>>b;
		g.addedge(a,b);
	}
	if(g.is_connected(0)) cout<<"true";
	else cout<<"false";
}
