#include<bits/stdc++.h>
using namespace std;
int countBST( int n)
{
	int m=1000000007;
    int dp[n+1]={0};
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
    	for(int j=0;j<i;j++){
    		if(j==1&&i-j-1==1) dp[i]++;
    		else dp[i]+=((dp[j]+dp[i-j-1])%m);
    		dp[i]%m;
		}
	}
	return dp[n];
}
main(){
	int n;
	cin>>n;
	cout<<countBST(n);
}
