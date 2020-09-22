#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    int v;
    list <int> * n;
    graph(int a){
        v=a;
        n=new list <int> [v];
    }
    bool has_path(int src,int dest){
    	int * visited=new int[v]{0};
    	for(int neighbour: n[src]){
            if(neighbour==dest) return true;
    		if(!visited[neighbour]){
				visited[neighbour]=1;
				bool ans=helper(visited,neighbour,dest);
    		    if(ans) return true;
    		}
		}
    	return false;
	}
	bool helper(int * visited,int neighbour,int dest){
		for(int ver:n[neighbour]){
			if(!visited[ver]){
				visited[ver]=1;
				if(ver==dest) return true;
				bool ans=helper(visited,ver,dest);
				if(ans) return true;
			}
		}
		return false;
	}
};
int main() {
    int v, e;
    cin>> v>> e;
    graph g(v);
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        g.n[a].push_back(b);
    }
    /*for(int i=0;i<v;i++){
        for(int ver:g.n[i]) cout<<ver<<" ";
        cout<<endl;
    }*/
    int a,b;
    cin>>a>>b;
    if(g.has_path(a,b)) cout<<"true";
    else cout<<"false";
}

