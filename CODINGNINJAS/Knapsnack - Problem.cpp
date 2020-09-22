#include<bits/stdc++.h>
using namespace std;

int knapsack(int *wt,int *val,int n,int W,int *dp){
	if(n==0) return 0;
	//cout<<n<<" "<<W<<" "<<dp[n][W]<<endl;
	if(dp[W]!=0) return dp[W];
	int ans;
	if(wt[n-1]<=W) ans=max(val[n-1]+knapsack(wt,val,n-1,W-wt[n-1],dp),knapsack(wt,val,n-1,W,dp));
	else ans=knapsack(wt,val,n-1,W,dp);
	dp[W]=ans;
	return ans;
}
main(){
	int n;
	cin>>n;
	int wt[n],val[n],W;
	for(int i=0;i<n;i++) cin>>wt[i];
	for(int i=0;i<n;i++) cin>>val[i];
	cin>>W;
	int *dp=new int[100001]{0};
	cout<<knapsack(wt,val,n,W,dp);
}
