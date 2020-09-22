#include<bits/stdc++.h>
using namespace std;
int dp[1001]={0};
int helper(vector<int>v,int i,int *f){

	if(i>=v.size()) return 0;
	//take current=
    if(dp[v[i]]) return dp[v[i]];
	int take=v[i]*f[v[i]]+helper(v,i+2,f);
	//exclude
	int ex=helper(v,i+1,f);
	//cout<<take<<" "<<ex<<" "<<v[i]<<endl;
	int ans= max(take,ex);
    //cout<<ans<<" "<<v[i]<<endl;
    dp[v[i]]=ans;
    return ans;
}
int solve(int n,vector<int>A){
	int f[1001]={0},vis[1001]={0};
	vector<int> v;
	for(int i=0;i<n;i++){
		f[A[i]]++;
		if(!vis[A[i]]) v.push_back(A[i]),vis[A[i]]=1;
	}
	sort(v.begin(),v.end());
	return helper(v,0,f);
}
main(){
	int n,a;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) cin>>a,v.push_back(a);
	cout<<solve(n,v);
}
/*
13 1 1 1 1 1 2 2 3 3 3 4 4 5
*/
