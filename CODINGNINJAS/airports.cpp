#include<bits/stdc++.h>
using namespace std;
class edge{
	public:
		int u,v,w;
};
int **g;
void dfs(int src,int * vis,vector<int> &v,int n){
	vis[src]=1;
	v.push_back(src);
	for(int i=1;i<=n;i++){
		if(g[src][i]&&!vis[i]) dfs(i,vis,v,n);
	}
}
bool comp(edge a,edge b){
	return a.w<b.w;
}
int get_parent(int a,int *par){
	if(par[a]==a) return a;
	return par[a]=get_parent(par[a],par);
}
void kruskals(edge * edges,int n,long long &cost,int l,int all){
	//cout<<n<<"kru\n";
	sort(edges,edges+l,comp);
	int count=0;
	int * par=new int[all+1];
	for(int i=1;i<=all;i++) par[i]=i;
	int i=0;
	while(count<n-1){
		//cout<<edges[i].u<<" "<<edges[i].v<<" count"<<count<<endl;
		count++;
		int a=get_parent(edges[i].u,par);
		int b=get_parent(edges[i].v,par);
		if(a!=b){
			cost+=edges[i].w;
			par[a]=b;
		}
		i++;
	}
	//cout<<"Endkru\n";
}
main(){
	int T,p=1;
	cin>>T;
	while(T--){
		int n,m,a;
		cin>>n>>m>>a;
		g=new int*[n+1];
		for(int i=1;i<=n;i++) g[i]=new int[n+1]{0};
		for(int i=0;i<m;i++){
			int p,q,r;
			cin>>p>>q>>r;
			if(r<a&&(g[p][q]==0||g[p][q]>r)) g[p][q]=g[q][p]=r;
		}
		int *vis=new int[n+1]{0};
		vector<vector<int> > comps;
		for(int i=1;i<=n;i++){
			vector<int> v;
			if(!vis[i]) dfs(i,vis,v,n),comps.push_back(v);
			v.clear();
		}
		/*for(int i=0;i<comps.size();i++){
			for(int j=0;j<comps[i].size();j++) cout<<comps[i][j]<<" ";
			cout<<endl;
		}*/
		long long cost=0;
		int count=0;
		for(int i=0;i<comps.size();i++){
			cost+=a,count++;
			//cout<<cost<<endl;
			edge * edges=new edge[comps[i].size()];
			int l=0;
			int visited[n+1]={};
			for(int j=0;j<comps[i].size();j++){
				for(int k=1;k<=n;k++) if(g[comps[i][j]][k]&&!visited[k]) edges[l].u=comps[i][j],edges[l].v=k,edges[l].w=g[comps[i][j]][k],l++;
				visited[comps[i][j]]=1;
			}
			///for(int j=0;j<l;j++) cout<<edges[j].u<<" "<<edges[j].v<<endl;
			kruskals(edges,comps[i].size(),cost,l,n);
		}
		cout<<"Case #"<<p<<": "<<cost<<" "<<count<<endl;
		p++;
	}
}
