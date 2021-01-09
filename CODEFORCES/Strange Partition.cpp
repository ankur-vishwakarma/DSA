#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		ll x;
		cin>>n>>x;
		double s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		ll a=0,b=0;
		for(int i=0;i<n;i++) b+=ceil(s[i]/x);
		double ans=0;
		for(int i=0;i<n;i++) ans+=s[i];
		a+=ceil(ans/x);
		cout<<a<<" "<<b<<endl;
	}
}
