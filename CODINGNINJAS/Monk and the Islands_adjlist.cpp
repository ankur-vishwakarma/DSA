#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX,cnt=0;
void dfs(vector<int>*g,int src,int * vis,int n){
	if(src==n){
		ans=min(ans,cnt);
		return;
	}
	cnt++; vis[src]=1;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]) dfs(g,g[src][i],vis,n);
	}
	cnt--;
}
long long bfs(vector<int>*g,int n){
	long long d=0;
	queue<int> q;
	int *vis=new int[n+1]{0};
	q.push(1);
	q.push(-1);
	vis[1]=1;
	int flag=0;
	while(!q.empty()){
		int curr=q.front();
		q.pop();
		if(curr==-1){
			d++;
			if(!q.empty()) q.push(-1);
			continue;
		}
		for(int i=0;i<g[curr].size();i++){
			if(!vis[g[curr][i]]){
				if(curr==n){
					flag=1;
					break;
				}
				q.push(g[curr][i]);
				vis[g[curr][i]];
			}
		}
		if(flag) break;
	}
	return d;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>  * g=new vector<int>[n+1];
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		//int * vis=new int[n+1]{0};
		//int count=0;]
		cout<<bfs(g,n)<<endl;
	}
}
