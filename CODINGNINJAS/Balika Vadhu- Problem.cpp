#include<bits/stdc++.h>
using namespace std;
int lcs(string a,string b,int k){
	int m=a.length(),n=b.length();
	int **dp=new int*[m+1];
	for(int i=0;i<=m;i++) dp[i]=new int[n+1]{0};
	int *vis=new int[max(m,n)+1]{0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			//cout<<a[i]<<" "<<b[j]<<endl;
			if(a[i]==b[j]){
				dp[i+1][j+1]=1+dp[i][j];
				//cout<<dp[i+1][j+1]<<" "<<a[i]-'a'<<endl;
				if(vis[dp[i+1][j+1]-1]<a[i]-0) vis[dp[i+1][j+1]-1]=a[i]-0;
			}
			else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
		}
	}
	if(dp[m][n]<k) return 0;
	sort(vis,vis+n,greater<int>());
	int sum=0;
	for(int i=0;i<k;i++) sum+=vis[i];
	return sum;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int k;
		cin>>k;
		cout<<lcs(a,b,k)<<endl;
	}
}
