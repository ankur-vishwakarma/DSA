#include<bits/stdc++.h>
using namespace std;
void dfs_path(int ** g,int v, int a,int b){
	int * visited=new int[v]{0};
	stack <int> ds;
	ds.push(a);
	visited[a]=1;
	vector<int> path;
	int flag=0;
	while(!ds.empty()){
		int s=ds.top();
		//cout<<s<<endl;
		path.push_back(s);
		if(s==b){
			flag=1;
			break;
		}
		ds.pop();
		for(int i=v-1;i>=0;i--){
			if(g[s][i]==1&&!visited[i]){
				visited[i]=1;
				ds.push(i);
			}
		}
	}
	if(flag==1){
		for(int i=path.size()-1;i>=0;i--) cout<<path[i]<<" ";
	}
}
main(){
	int v,e;
    cin >>v>> e;
    int ** g= new int*[v];
    for(int i=0;i<v;i++) g[i]=new int[v]{0};
    int a,b;
    for(int i=0;i<e;i++){
    	cin>>a>>b;
    	g[a][b]=1;
    	g[b][a]=1;
	}
	cin>>a>>b;
	dfs_path(g,v,a,b);
}
