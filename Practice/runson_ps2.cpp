#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> board,int p,int q){
	int n=board.size(),m=board[0].size();
	int dp_d[n][m],dp_u[n][m];
	
	
	///topdown
	for(int i=0;i<m;i++) dp_d[n-1][i]=board[n-1][i];
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<m;j++){
			dp_d[i][j]=dp_d[i+1][j];
			if(j-1>=0) dp_d[i][j]=max(dp_d[i][j],dp_d[i+1][j-1]);
			if(j+1<m)  dp_d[i][j]=max(dp_d[i][j],dp_d[i+1][j+1]);
			dp_d[i][j]+=board[i][j];
			//cout<<dp_d[i][j]<<" ";
		}
		//cout<<endl;
	}
	
	//bottomup
	for(int i=0;i<m;i++) dp_u[0][i]=board[0][i];
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			dp_u[i][j]=dp_u[i-1][j];
			if(j-1>=0) dp_u[i][j]=max(dp_u[i][j],dp_u[i-1][j-1]);
			if(j+1<m)  dp_u[i][j]=max(dp_u[i][j],dp_u[i-1][j+1]);
			dp_u[i][j]+=board[i][j];
			//cout<<dp_u[i][j]<<" ";
		}
		//cout<<endl;
	}
	
	return max(dp_d[0][p],dp_u[n-1][q]);
	//for(int i=0;i<n;)
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
