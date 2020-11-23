#include<bits/stdc++.h>
using namespace std;
int lcs_same(string s,int n){
	int **dp=new int*[n+1];
	for(int i=0;i<=n;i++) dp[i]=new int[n+1];
	for(int i=0;i<=n;i++) dp[0][i]=0,dp[i][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			if(i!=j&&s[i-1]==s[j-1]) dp[i][j]=max(1+dp[i-1][j-1],dp[i][j]);
		}
	}
	return dp[n][n];
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<lcs_same(s,n)<<endl;
	}
}
