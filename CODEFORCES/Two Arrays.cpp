#include<bits/stdc++.h>
#define ll long long
#define md 1000000007
using namespace std;
int **dp;
ll nCr(ll n,ll r){
	if(n==r||r==0) return 1;
	if(dp[n][r]) return dp[n][r];
	ll ans=(nCr(n-1,r-1)%md+nCr(n-1,r)%md)%md;
	ans=ans%md;
	dp[n][r]=ans;
	return ans;
}
main(){
	ll n,m;
	cin>>n>>m;
	ll a=n+2*m-1,b=2*m;
	dp=new int*[a+1];
	for(int i=0;i<a+1;i++) dp[i]=new int[b+1]{0};
	cout<<nCr(a,b);
}
