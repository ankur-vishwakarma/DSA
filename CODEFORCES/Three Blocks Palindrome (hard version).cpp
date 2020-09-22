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
		//making count matrix
		vector<vector<int> > v;
		for(int i=0;i<=200;i++){
			vector<int> tmp;
			v.push_back(tmp);
		}
		for(int i=0;i<n;i++) v[s[i]].push_back(i);
		/*for(int i=1;i<=10;i++){
			for(int j=0;j<v[i].size();j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}*/
		//making prefix matrix
		int **dp=new int*[200];
		for(int i=1;i<=200;i++) dp[i]=new int[n+1];
		for(int i=1;i<=200;i++) dp[i][0]=dp[i][1]=0;
		dp[s[0]][1]=1;
		for(int i=1;i<n;i++){
			for(int j=1;j<=200;j++) dp[j][i+1]=dp[j][i];
			dp[s[i]][i+1]=dp[s[i]][i]+1;
		}
		/*for(int i=1;i<=10;i++){
			for(int j=0;j<=n;j++) cout<<dp[i][j]<<" ";
			cout<<endl;
		}*/
		int ans=INT_MIN;
		//count singles
		for(int i=1;i<=200;i++) ans=max(ans,dp[i][n]);
		for(int i=1;i<=200;i++){
			if(v[i].size()>1){
				int mx=INT_MIN;
			//cout<<i<<"i\n";
			for(int k=0;k<=v[i].size()/2;k++){
				int l=v[i][k];
				int r=v[i][v[i].size()-1-k];
				if(l>=r) break;
				//cout<<l<<"l r"<<r<<endl;
				//search max(cntout) in range l+1,r-1
				int lmax=INT_MIN,buf;
				for(int j=1;j<=200;j++){
 					buf=dp[j][r]-dp[j][l+1];
 					if(buf>lmax) lmax=buf;
				}
				mx=max(mx,2*(k+1)+lmax);
				//cout<<mx<<"mx lmax"<<lmax<<endl;
			}
			ans=max(ans,mx);
			//cout<<ans<<endl;
			}
		}
		cout<<ans<<endl;
	}
}
