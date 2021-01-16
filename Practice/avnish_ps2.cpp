#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> board,int p,int q){
	int a=board.size(),b=board[0].size();
	
	int dpd[a][b],dpu[a][b];
	
	//TOP
	
	//initialize
	for(int i=0;i<b;i++) dpd[a-1][i]=board[a-1][i];
	
	//using bottom up downwards
	int i=a-2,j=0;
	
	while(i>=0){
		j=0;
		while(j<b){
			dpd[i][j]=dpd[i+1][j];
			if(j-1>=0) dpd[i][j]=max(dpd[i][j],dpd[i+1][j-1]);
			if(j+1<b)  dpd[i][j]=max(dpd[i][j],dpd[i+1][j+1]);
			dpd[i][j]+=board[i][j];
			
			j++;
		}
		
		i--;
	}
	
	//BOTTOMUP
	//initialize
	for(int i=0;i<b;i++) dpu[0][i]=board[0][i];
	
	//using bottom up downwards
	i=1,j=0;
	while(i<a){
		j=0;
		while(j<b){
			dpu[i][j]=dpu[i-1][j];
			if(j-1>=0) dpu[i][j]=max(dpu[i][j],dpu[i-1][j-1]);
			if(j+1<b)  dpu[i][j]=max(dpu[i][j],dpu[i-1][j+1]);
			dpu[i][j]+=board[i][j];
			
			j++;
		}
		
		i++;
	}
	
	int ans= max(dpd[0][p],dpu[a-1][q]);
	return ans;
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

3 3
9 4 7
2 1 3
1 4 2
2 1
*/
//for(int i=0;i<a;i++) for(int j=0;j<b;j++) dp[i][j]=0;
