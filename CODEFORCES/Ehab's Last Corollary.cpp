#include<bits/stdc++.h>
using namespace std;
int get_parent(int *par,int k){
	if(k==par[k]) return k;
	return par[k]=get_parent(par,par[k]);
}
bool dfs_path(vector<int> g[], int src,int dest,vector<int> &p1,int *vis){
	//cout<<src<<endl;
	if(src==dest){
		p1.push_back(src);
		return true;
	}
	vis[src]=1;
	p1.push_back(src);
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			bool ans=dfs_path(g,g[src][i],dest,p1,vis);
			if(ans) return true;
		}
	}
	p1.pop_back();
	return false;
}
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> g[n+1];
	int * vis=new int[n+1]{};
	int * par=new int[n+1]{};
	for(int i=0;i<=n;i++) par[i]=i;
	int * a=new int[n+1]{};
	int * b=new int[n+1]{};
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		if(u>k||v>k) continue;
		g[u].push_back(v);
		g[v].push_back(u);
		int par_u=get_parent(par,u);
		int par_v=get_parent(par,v);
		//cout<<par_u<<" "<<par_v<<endl;
		if(par_u==par_v){
			cout<<"2\n";
			/*for(int i=1;i<=n;i++){
				cout<<i<<": ";
				for(int j=0;j<g[i].size();j++) cout<<g[i][j]<<" ";
				cout<<endl;
			}*/
			vector<int> p1,p2;
			int visited[n+1]={};
		    dfs_path(g,u,par_u,p1,visited);
		    for(int i=1;i<=n;i++) visited[i]=0;
		    //cout<<endl;
			dfs_path(g,v,par_v,p2,visited);
			cout<<p1.size()+p2.size()-1<<endl;
			for(int l=0;l<p1.size();l++) cout<<p1[l]<<" ";
			for(int l=p2.size()-1;l>=0;l--) if(p2[l]!=par_u) cout<<p2[l]<<" ";
			cout<<endl;
			delete [] vis; delete [] par; delete [] a; delete [] b;
			return 0;
		}
		if(vis[u]&&vis[v]) continue;
		if(!vis[u]&&!vis[v]){
			vis[u]=vis[v]=1;
			a[u]=1,b[v]=1;
			if(u<v) par[v]=u;
			else par[u]=v;
		}
		else if(!vis[u]){
			if(a[v]==1) b[u]=1;
			else a[u]=1;
			par[u]=v;
			vis[u]=1;
		}
		else{
			if(a[u]==1) b[v]=1;
			else a[v]=1;
			par[v]=u;
			vis[v]=1;
		}
	}
	cout<<"1\n";
	int ones_a=0,ones_b=0;
	vector<int> frst,sec;
	for(int i=1;i<=n;i++){
		if(a[i]==1) ones_a++,frst.push_back(i);
		else if(b[i]==1) ones_b++,sec.push_back(i);
	}
    int count=1;
	if(ones_a>ones_b){
		for(int i=0;i<frst.size()&&count<=(k+1)/2;i++,count++) cout<<frst[i]<<" ";
	}else{
		for(int i=0;i<sec.size()&&count<=(k+1)/2;i++,count++) cout<<sec[i]<<" ";
	}
	delete [] vis; delete [] par; delete [] a; delete [] b;
	
}
/*//cycle
	//sort(e,e+n,comp);
	int l[n]={};
	l[e[0][0]]=1;
	int vis[n]={};
	vis[e[0][0]]=1;
	int par[n],flag=0;
	par[0]=-1;
	for(int i=0;i<m;i++){
		int cyc=0;
		if(vis[e[i][0]]&&vis[e[i][1]]){
			cyc=abs(l[e[i][1]]-l[e[i][0]])+1;
			if(cyc<=k){
				cout<<"2\n"<<cyc<<endl;
				int j=e[i][1];
				stack<int> ord;
				while(j!=e[i][0]&&par[j]!=-1){
					//cout<<j<<" "<<par[j]<<endl;
					ord.push(j),j=par[j];
				}
				//cout<<endl;
				ord.push(j);
				while(!ord.empty()){
					cout<<ord.top()+1<<" ";
					ord.pop();
				}
				flag=1;
				break;
			}
		}
		else{
			if(vis[e[i][0]]){
				l[e[i][1]]=l[e[i][0]]+1;
				par[e[i][1]]=e[i][0];
				vis[e[i][1]]=1;
			}
			else{
				l[e[i][0]]=l[e[i][1]]+1;
				par[e[i][0]]=e[i][1];
				vis[e[i][0]]=1;
			}
		}
		/*for(int j=0;j<n;j++) cout<<l[j]<<" ";
		cout<<endl;
		for(int j=0;j<n;j++) cout<<par[j]<<" ";
		cout<<endl;
	}
	if(!flag){
		set<int> a,b;
		bool at=true,bt=true;
		for(int i=0;i<m;i++){
			if(!a[e[i][0]])
		}
	}*/
		//for(int l=1;l<=n;l++) cout<<par[l]<<" ";
		//cout<<endl;
		/*for (auto itr = a.begin(); itr != a.end(); ++itr) cout << '\t' << *itr; 
		cout<<endl;
		for (auto itr = b.begin(); itr != b.end(); ++itr) cout << '\t' << *itr; 
		cout<<endl;*/
