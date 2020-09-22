#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll n,r;
		cin>>n>>r;
		ll m=min(n,r),ans;
		if(n>m){
			ans=(m*(m+1))/2;
		}
		else{
			m--;
			ans=(m*(m+1))/2;
			ans+=1;
		}
		cout<<ans<<endl;
	}
}
