#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int n;
	cin>>n;
	ll s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	ll pref[n+1];
	pref[0]=0;
	for(int i=1;i<=n;i++) pref[i]=s[i-1]+pref[i-1];
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<(pref[r]-pref[l-1])/10<<endl;
	}
}
