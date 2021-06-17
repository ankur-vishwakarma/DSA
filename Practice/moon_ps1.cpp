#include<bits/stdc++.h>
using namespace std;
int knapsack(vector<int> val,vector<int> wt,int w,int n,int **dp){
	if(n==0||w==0) return 0;
	
	if(dp[n][w]!=0) return dp[n][w];
	
	if(wt[n-1]<=w) return dp[n][w]=max(val[n-1]+knapsack(val,wt,w-wt[n-1],n-1,dp), knapsack(val,wt,w,n-1,dp));
	else return dp[n][w]=knapsack(val,wt,w,n-1,dp);
}
int solve(vector<int> iv,vector<int> articles,int p){
	for(int i=0;i<articles.size();i++) articles[i]*=2;
	int n=articles.size();
	int ** dp=new int *[n+1];
	for(int i=0;i<=n;i++) dp[i]=new int[p+1]{};
	
	return knapsack(iv,articles,p,n,dp);
}
main(){
	int n,k,p;
	cin>>n;
	vector<int> iv,a;
	for(int i=0;i<n;i++) cin>>k,iv.push_back(k);
	for(int i=0;i<n;i++) cin>>k,a.push_back(k);
	cin>>p;
	cout<<solve(iv,a,p);
	
}
