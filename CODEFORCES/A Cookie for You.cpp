#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,m,n;
		cin>>a>>b>>m>>n;
		if((a+b)<(m+n)){
			cout<<"No\n";
			continue;
		}
		if(a>=n&&b>=n){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
}
