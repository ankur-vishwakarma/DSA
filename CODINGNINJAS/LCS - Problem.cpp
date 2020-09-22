#include<bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2){
	int m=s1.length();
	int n=s2.length();
	int **dp=new int*[m+1];
	for(int i=0;i<=m;i++){
		dp[i]=new int[n+1];
		for(int j=0;j<=n;j++) dp[i][j]=-1;
	}
	for(int i=0;i<=m;i++) dp[i][0]=0;
	for(int i=0;i<=n;i++) dp[0][i]=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			//cout<<s1[i-1]<<" "<<s2[j-1]<<endl;
			if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[m][n];
}

main(){
	string a,b;
	cin>>a>>b;
	cout<<lcs(a,b);
}
