#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	list <int> *n;
    stack <int> path;
	public:
		graph(int k){
			v=k;
			n=new list<int> [v];
		}
		void addedge(int a,int b){
			n[a].push_back(b);
			n[b].push_back(a);
		}
		void dfs(int src,int dest){
			int * vis=new int[v]{0};
			//path.push(src);
			bool ans=helper(src,dest,vis);
			if(ans){
				while(!path.empty()){
					cout<<path.top()<<" ";
					path.pop();
				}
			}
		}
		bool helper(int src,int dst,int * vis){
			//cout<<src<<endl;
			path.push(src);
			//cout<<path.top();
			vis[src]=1;
			if(src==dst) return true;
			for(int ver:n[src]){
				if(!vis[ver]){
					bool ans=helper(ver,dst,vis);
					if(ans) return true;
					else path.pop();
				}
			}
			return false;
		}
		void printstack(stack<int> & s){
			stack<int> path=s;
			while(!path.empty()){
					cout<<path.top()<<" ";
					path.pop();
			}
			cout<<endl;
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
	cin>>a>>b;
	g.dfs(a,b);
}
