#include<bits/stdc++.h>
using namespace std;
int dp_sum(int **s,int n,int m){
	int **dp=new int*[n];
	for(int i=0;i<n;i++) dp[i]=new int[m];
	int mx=INT_MIN;
	//base cases
	dp[n-1][m-1]=s[n-1][m-1];
	mx=max(mx,dp[n-1][m-1]);
	//lst row
	for(int i=m-2;i>=0;i--){
		//sum with nxts > value alone
		int sum_till_here=dp[n-1][i+1]+s[n-1][i];
		if(sum_till_here>s[n-1][i]) dp[n-1][i]=sum_till_here;
		else dp[n-1][i]=s[n-1][i]; //alone
		mx=max(mx,dp[n-1][i]);
	}
	//lst col
	for(int i=n-2;i>=0;i--){
		//sum with nxts > value alone
		int sum_till_here=dp[i+1][m-1]+s[i][m-1];
		if(sum_till_here>s[i][m-1]) dp[i][m-1]=sum_till_here;
		else dp[i][m-1]=s[i][m-1]; //alone
		mx=max(mx,dp[i][m-1]);
	}
	// now lets fill dp-- alone or square or max side or max down
	for(int i=n-2;i>=0;i--){
		for(int j=m-2;j>=0;j--){
			int me=s[i][j],sqr_sum=s[i][j]+s[i][j+1]+s[i+1][j]+s[i+1][j+1];
			int l1mx=max(me,sqr_sum);
			int sum_down=dp[i+1][j]+s[i][j+1],sum_side=s[i+1][j]+dp[i][j+1];
			int l2mx=max(sum_down,sum_side);
			dp[i][j]=max(l1mx,l2mx);
			mx=max(mx,dp[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	return mx;
}
main(){
	int n,m;
	cin>>n>>m;
	int **s =new int*[n];
	for(int i=0;i<n;i++) s[i]=new int[m];
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>s[i][j];
	cout<<dp_sum(s,n,m);
}
