#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> iv,vector<int> articles,int p){
	for(int i=0;i<articles.size();i++) articles[i]*=2;
	int n=articles.size();
	//int ** dp[n+1];
	//for(int i=0;i<=n;i++) dp[i]=new int *[p+1];
	int knapsack[n+1][p+1];
	for(int i=0;i<=n;i++) knapsack[i][0]=0;
	for(int i=0;i<=p;i++) knapsack[0][i]=0;
	
	int i=1,j=1;
	while(i<=n){
		j=1;
		while(j<=p){
			if(articles[i-1]<=j){
				knapsack[i][j]=max(iv[i-1]+knapsack[i-1][j-articles[i-1]],knapsack[i-1][j]);
			}
			else knapsack[i][j]=knapsack[i-1][j];
			
			j++;
		}
		i++;
	}
	
	return knapsack[n][p];
	//return 0;
}
main(){
	int n,k,p;
	cin>>n;
	vector<int> iv,a;
	for(int i=0;i<n;i++) cin>>k,iv.push_back(k);
	for(int i=0;i<n;i++) cin>>k,a.push_back(k);
	cin>>p;
	cout<<solve(iv,a,p);
	
}

/*
4
2 4 4 5
2 2 3 4
15

3
3 2 2 
3 2 2
9
*/
