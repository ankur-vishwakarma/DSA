#include<bits/stdc++.h>
using namespace std;
bool dfs(int n,int k,int src,int *s){
	//cout<<src<<endl;
	if(src==k) return true;
	if(src>=n||src>=k) return false;
	bool ans=dfs(n,k,src+s[src],s);
	return ans;
}
main(){
	int n,k;
	cin>>n>>k;
	int * s=new int[n+1];
	for(int i=1;i<n;i++) cin>>s[i];
	bool ans=dfs(n,k,1,s);
	if(ans) cout<<"YES\n";
	else cout<<"NO\n";
}
