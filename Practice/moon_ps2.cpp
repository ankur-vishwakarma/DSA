#include<bits/stdc++.h>
using namespace std;

int updown(vector<vector<int>> board,int p,int n,int m){
	int dp[n][m];
	for(int i=0;i<m;i++) dp[n-1][i]=board[n-1][i];
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<m;j++){
			dp[i][j]=dp[i+1][j];
			if(j-1>=0) dp[i][j]=max(dp[i][j],dp[i+1][j-1]);
			if(j+1<m)  dp[i][j]=max(dp[i][j],dp[i+1][j+1]);
			dp[i][j]=dp[i][j]+board[i][j];
		}
	}
	return dp[0][p];
}

int bottomup(vector<vector<int>> board,int q,int n,int m){
	int dp[n][m];
	for(int i=0;i<m;i++) dp[0][i]=board[0][i];
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			dp[i][j]=dp[i-1][j];
			if(j-1>=0) dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
			if(j+1<m)  dp[i][j]=max(dp[i][j],dp[i-1][j+1]);
			dp[i][j]=dp[i][j]+board[i][j];
		}
	}
	return dp[n-1][q];
}

int solve(vector<vector<int>> board,int p,int q){
	int n=board.size(),m=board[0].size();
	int ud=updown(board,p,n,m);
	int bu=bottomup(board,q,n,m);
	return max(ud,bu);
}
main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> s( n , vector<int> (m)); 
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>s[i][j];
	int p,q;
	cin>>p>>q;
	cout<<solve(s,p,q);
}

/*
3 3
1 2 3
4 5 6
7 8 9
1 0
*/
