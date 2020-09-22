#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int dp[27][n+1];
		for(int i=1;i<=26;i++) dp[i][0]=dp[i][1]=0;
		dp[s[0]][1]=1;
		for(int i=1;i<n;i++){
			for(int j=1;j<=26;j++) dp[j][i+1]=dp[j][i];
			dp[s[i]][i+1]=dp[s[i]][i]+1;
		}
		/*for(int i=1;i<=26;i++){
			for(int j=0;j<=n;j++) cout<<dp[i][j]<<" ";
			cout<<endl;
		}*/
		
		//alone max
		int maxm=0;
		for(int i=1;i<=26;i++) maxm=max(maxm,dp[i][n]);
		//cout<<maxm<<endl;
		//in range max
		int net_m=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				//mid max
				//cout<<i<<"i j"<<j<<endl;
				int mid_max=0;
				for(int k=1;k<=26;k++) mid_max=max(mid_max,dp[k][j+1]-dp[k][i]);
				//cout<<mid_max<<"\n";
				//left n right
				int sides=0;
				for(int k=1;k<=26;k++){
					int side=min(dp[k][i]-dp[k][0],dp[k][n]-dp[k][j+1]);
					///cout<<dp[k][i]-dp[k][0]<<" "<<dp[k][n+1]-dp[k][j+1]<<endl;
					///cout<<side<<" "<<k<<endl;
					sides=max(sides,side);
				}
				//cout<<sides<<endl;
				net_m=max(net_m,2*sides+mid_max);
			}
		}
		cout<<max(maxm,net_m)<<endl;
	}
}
