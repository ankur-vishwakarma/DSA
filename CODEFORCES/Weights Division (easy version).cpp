#include<bits/stdc++.h>
#define ll long long
using namespace std;
priority_queue <pair< ll, pair<ll,ll> > > pq;
void leaf_count(vector<pair<ll,ll> > g[],ll *vis,ll src,ll *leaf){
	vis[src]=1;
	if(g[src].size()==1){
		leaf[src]=1;
	}
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i].first]){
			leaf_count(g,vis,g[src][i].first,leaf);
			leaf[src]+=leaf[g[src][i].first];
			
		}
	}
}
void dfs(vector<pair<ll,ll> > g[],ll *vis,ll src,ll wt,ll *leaf){
	//cout<<src<<" "<<wt<<endl;
	vis[src]=1;
	//ll count=0;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i].first]){
			//count++;
			dfs(g,vis,g[src][i].first,g[src][i].second,leaf);
		}
	}
	//if(count==0) count++;
	pq.push({wt*leaf[src],{leaf[src],wt}});
}
main(){
	int t;
	cin>>t;
	while(t--){
		ll n,s;
		cin>>n>>s;
		vector<pair<ll,ll> > g[n+1];
		for(ll i=0;i<n-1;i++){
			ll u,v,w;
			cin>>u>>v>>w;
			g[u].push_back({v,w});
			g[v].push_back({u,w});
		}
		ll * vis1=new ll[n+1]{};
		ll * leaf=new ll[n+1]{};
		for(int i=1;i<=n;i++) leaf[i]=0;
		leaf_count(g,vis1,1,leaf);
		for(ll i=1;i<=n;i++) cout<<leaf[i]<<" ";
		ll * vis=new ll[n+1]{};
		dfs(g,vis,1,0,leaf);
		priority_queue <pair<ll,pair<ll,ll>> > gq = pq; 
		ll sum=0,count=0;
    	while (!gq.empty()) 
    	{ 
    		sum+=(gq.top().first);
        	//cout << '\t' << gq.top(); 
        	gq.pop(); 
    	} 
    	//cout << '\n'; 
    	//cout<<sum<<endl;
    	while(sum>s){
    		count++;
    		pair<ll,pair<ll,ll>> front=pq.top();
    		pq.pop();
    		sum-=(front.first);
    		front.second.second/=2;
    		ll ss=front.second.first*front.second.second;
    		sum+=(ss);
    		pq.push({ss,{front.second.first,front.second.second}});
    		//cout<<sum<<endl;
		}
		cout<<count<<endl;
		while(!pq.empty()) pq.pop();
	}
}
/*
1
5 20
1 2 50
1 3 10
3 4 30
3 5 40


*/
