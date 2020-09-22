#include<bits/stdc++.h>
using namespace std;
int dp[1001]={0};
int min_count(int n){
	if(n==0) return 0;
	if(dp[n]) return dp[n];
	int i=1,min=1001;
	while(i*i<=n){
		int sq=i*i;
		if(n-sq<0) break;
		int ans=min_count(n-sq);
		if(ans<min) min=ans;
		i++;
	}
	//cout<<n<<" "<<min+1<<endl;
	dp[n]=1+min;
	return min+1;
}
main(){
	int n;
	cin>>n;
	cout<<min_count(n);
}
