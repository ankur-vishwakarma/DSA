#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#include<unordered_map>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;
ll dijkstra(ll **g,int n,int src){
	//cout<<src<<endl;
	ll *dist=new ll[n+1];
	for(int i=1;i<=n;i++) dist[i]=1001;
	priority_queue<pair<ll,ll> > pq;
	pq.push({0,src});
	dist[src]=0;
	while(!pq.empty()){
		pair<ll,ll> i=pq.top();
		pq.pop();
		ll d=i.first;
		ll s=i.second;
		//cout<<d<<" "<<s<<endl;
		for(int j=1;j<=n;j++){
			if(j==s) continue;
			ll newD=d+g[s][j];
			//cout<<j<<"j "<<dist[j]<<" "<<newD<<endl;
			if(newD<dist[j]){
				//cout<<"in\n";
				dist[j]=newD;
				pq.push({newD,j});
			}
		}
	}
	ll ans=0;
	for(int i=src;i<=n;i++) ans+=dist[i];
	//cout<<ans<<"ans\n";
	return ans;
}
ll floydwarshal(int **g,int n){
	
}
main(){
	FAST;
	int n;
	cin>>n;
	ll **g=new ll*[n+1];
	for(int i=0;i<=n;i++) g[i]=new ll[n+1];
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>g[i][j];
	int q;
	cin>>q;
	while(q--){
		ll a,b,c;
		cin>>a>>b>>c;
		g[a][b]=c;
		ll sum=0;
		for(int i=1;i<n;i++) sum+=dijkstra(g,n,i);
		cout<<sum<<" ";
	}
}
