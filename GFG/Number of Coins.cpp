#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int **dp;
int min_coins(int *s,int n,int m){
	//cout<<m<<" "<<n<<endl;
	if(m<0||n==0) return INT_MAX-1;
	if(m==0) return 1;
	if(dp[m][n]) return dp[m][n];
	int ans1= min_coins(s,n,m-s[0])+1;
	int ans2= min_coins(s+1,n-1,m);
	//cout<<ans1<<" a1 a2 "<<ans2<<" "<<m<<endl;
	return dp[m][n]=min(ans1,ans2);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		dp=new int *[m+1];
		for(int i=0;i<=m;i++) dp[i]=new int[n+1]{};
		int ans=min_coins(s,n,m)-1;
		if(ans==INT_MAX-1||ans==INT_MAX-2) cout<<-1<<endl;
		else cout<<ans<<endl;
	}
}
