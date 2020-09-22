#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	cin>>k;
	int dp[2][k+1];
	dp[0][0]=1;
	for(int i=1;i<=k;i++) dp[0][i]=0;
	int flag=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			dp[flag][j]=dp[flag^1][j];
			if(j-s[i]>=0){
				dp[flag][j]=dp[flag][j]||dp[flag^1][j-s[i]];
			}
			cout<<dp[flag][j]<<" ";
		}
		cout<<endl;
		flag=flag^1;
	}
	cout<<dp[flag^1][k];
}
