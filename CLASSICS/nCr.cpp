#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;
int **dp;
ll nCr(ll n,ll r){
	//cout<<n<<" "<<r<<endl;
	if(n==r||r==0) return 1;
	if(dp[n][r]) return dp[n][r];
	ll ans=(nCr(n-1,r-1)%m+nCr(n-1,r)%m)%m;
	ans=ans%m;
	dp[n][r]=ans;
	return ans;
}
main(){
	ll n,r;
	cin>>n>>r;
	dp=new int*[n+1];
	for(int i=0;i<n+1;i++) dp[i]=new int[r+1]{0};
	//dp[n][r]=0,dp[n][0]
	cout<<nCr(n,r);
}
