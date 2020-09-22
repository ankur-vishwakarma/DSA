#include<bits/stdc++.h>
using namespace std;
vector<char> lcs(string s1, string s2){
	int m=s1.length();
	int n=s2.length();
	int **dp=new int*[m+1];
	for(int i=0;i<=m;i++){
		dp[i]=new int[n+1];
		for(int j=0;j<=n;j++) dp[i][j]=-1;
	}
	for(int i=0;i<=m;i++) dp[i][0]=0;
	for(int i=0;i<=n;i++) dp[0][i]=0;
	vector<char> v;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			//cout<<s1[i-1]<<" "<<s2[j-1]<<endl;
			if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	for(int i=m;i>0;i--){
		for(int j=n;j>0;j--){
			if()
		}
	}
	return v;
}
int editDistance(string s1, string s2){
    vector<char> v=lcs(s1,s2);
}

main(){
	string a,b;
	cin>>a>>b;
	cout<<editDistance(a,b);
}
