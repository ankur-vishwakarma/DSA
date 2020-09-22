#include<bits/stdc++.h>
using namespace std;
int dp[70]={0};
long staircase(int n){
	if(n<0) return 0;
	if(n==1||n==0) return 1;
	if(dp[n]!=0) return dp[n];
	long k= staircase(n-1)+staircase(n-2)+staircase(n-3);
	dp[n]=k;
	return k;
}
main(){
	int n;
	cin>>n;
	cout<<staircase(n);
}
