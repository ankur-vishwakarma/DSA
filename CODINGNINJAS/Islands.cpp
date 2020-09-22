#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	list<int> *n;
	
	public:
		graph(int v){
			this->v=v;
			n=new list<int>[v+1];
		}
		void addedge(int a,int b){
			n[a].push_back(b);
			n[b].push_back(a);
		}
		int connected(int src){
			int * visited=new int[v+1]{0};
			int count=0;
			for(int i=1;i<=v;i++){
				if(!visited[i]){
					//cout<<i<<endl;
					count++;
					dfs(src,visited);
				}
			}
			return count;
		}
		void dfs(int src,int * visited){
			visited[src]=1;
			for(int ver:n[src]){
				if(!visited[ver]) dfs(ver,visited);
			}
		}
};
main(){
	int n,m;
	cin>>n>>m;
	int u[m],v[m];
	for(int i=0;i<m;i++) cin>>u[i];
	for(int i=0;i<m;i++) cin>>v[i];
	graph g(n);
	for(int i=0;i<m;i++) g.addedge(u[i],v[i]);
	cout<<g.connected(1);
}
