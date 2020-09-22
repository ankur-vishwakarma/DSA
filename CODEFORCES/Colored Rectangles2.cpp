#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll r,g,b,l;
ll dp[205][205][205];
ll s[205],t[205],u[205];

ll max_ar(int i,int j,int k){
	//cout<<s[i]<<" "<<t[j]<<" "<<u[k]<<endl;
	if((i>=r&&j>=g)||(i>=r&&k>=b)||(j>=g&&k>=b)) return 0;
	if(dp[i][j][k]!=-1) return dp[i][j][k];
	ll area=0;
	if(i<r&&j<g) area=max(area,s[i]*t[j]+max_ar(i+1,j+1,k));
	if(i<r&&k<b) area=max(area,s[i]*u[k]+max_ar(i+1,j,k+1));
	if(k<b&&j<g) area=max(area,t[j]*u[k]+max_ar(i,j+1,k+1));
	return dp[i][j][k]=area;
}
main(){
	cin>>r>>g>>b;
	for(int i=0;i<r;i++) cin>>s[i];
	for(int i=0;i<g;i++) cin>>t[i];
	for(int i=0;i<b;i++) cin>>u[i];
	
	sort(s,s+r,greater<int>()),sort(t,t+g,greater<int>()),sort(u,u+b,greater<int>());
	
	for(int i=0;i<205;i++)
		for(int j=0;j<205;j++)
			for(int k=0;k<205;k++) dp[i][j][k]=-1;
	
	cout<<max_ar(0,0,0);
}
