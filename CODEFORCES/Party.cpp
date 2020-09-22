#include<bits/stdc++.h>
using namespace std;
int hieght(vector<int>g[],int src,int *vis){
	if(g[src].size()==0){
		vis[src]=1;
		return 1;
	}
	int h=0;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			int k=hieght(g,g[src][i],vis);
			h=max(k,h);
		}
	}
	return 1+h;
}
main(){
	int n;
	cin>>n;
	vector<int> g[n+1];
	int par[n+1];
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		par[i]=a;
		if(a==-1) continue;
		g[a].push_back(i);
	}
	int * vis=new int[n+1]{};
	int max_h=0;
	for(int i=1;i<=n;i++){
		if(par[i]==-1){
			int h=hieght(g,i,vis);
			max_h=max(max_h,h);
		}
	}
	cout<<max_h;
}
