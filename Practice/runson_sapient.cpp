#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> iv,vector<int> articles,int p){
	for(int i=0;i<articles.size();i++) articles[i]*=2;
	int n=articles.size();
	//int ** dp[n+1];
	//for(int i=0;i<=n;i++) dp[i]=new int *[p+1];
	int dp[n+1][p+1];
	for(int i=0;i<=n;i++) dp[i][0]=0;
	for(int i=0;i<=p;i++) dp[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=p;j++){
			if(articles[i-1]<=j){
				dp[i][j]=max(iv[i-1]+dp[i-1][j-articles[i-1]],dp[i-1][j]);
			}
			else dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][p];
	//return 0;
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
