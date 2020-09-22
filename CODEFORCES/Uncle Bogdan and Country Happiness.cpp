#include<bits/stdc++.h>
#define ll long long
using namespace std;
pair<ll,ll> dfs(vector<int> g[],ll * p,ll * h,int * vis,int src){
	vis[src]=1;
	ll persons=p[src],child_guds=0;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			pair<ll,ll> ans=dfs(g,p,h,vis,g[src][i]);
			if(ans.first==-1) return {-1,-1};
			persons+=ans.first,child_guds+=ans.second;
		}
	}
	if((persons+h[src])%2==0) {
	}
	else return {-1,-1};
	ll guds=(persons+h[src])/2;
	if(guds>=0&&guds<=persons){
	}
	else return {-1,-1};
	if(child_guds<=guds){
	}
	else return {-1,-1};
	
	return {persons,guds};
}
	/*vis[src]=1;
	ll bad=0,gud=0;
	for(int i=0;i<g[src].size();i++){
		if(!vis[g[src][i]]){
			pair<ll,ll> ans=dfs(g,p,h,vis,g[src][i]);
			if(ans.first==-1) return {-1,-1};
			gud+=ans.first,bad+=ans.second;
		}
	}
	//cout<<src<<" "<<child_h<<" "<<endl;
	
	
	//if(child_h==h[src]) return {gud+p[src],bad};
	///if(bad==0) bad=INT_MIN;
	ll child_h=gud+bad,total_h=child_h+p[src];
	if(abs(h[src])<=total_h&&total_h%2==abs(h[src]%2)){
		if()
		cout<<src<<" "<<child_h<<" "<<par_bad_needed<<endl;
		if(par_bad_needed>p[src]||par_bad_needed>gud) return {-1,-1};
		return {gud+p[src]-par_bad_needed,bad+par_bad_needed};
	}
	else return {-1,-1};*/


main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> g[n+1];
		ll p[n+1],h[n+1];
		for(int i=1;i<=n;i++) cin>>p[i];
		for(int i=1;i<=n;i++) cin>>h[i];
		for(int i=1;i<n;i++){
			int a,b;
			cin>>a>>b;
			g[a].push_back(b);
		}
		int vis[n+1]={};
		pair<ll,ll> ans=dfs(g,p,h,vis,1);
		if(ans.first==-1) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
