#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#include<unordered_map>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

main(){
	FAST;
	int t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		ll s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		if(n==1){
			cout<<s[0]<<endl;
			continue;
		}
		int flag=1;
		ll sum=0;
		for(int i=0;i<n-1;i++){
			if(flag){ ///check inc
				if(s[i+1]<s[i]) sum+=s[i],flag=0;
			}
			else{
				if(s[i+1]>s[i]) sum-=s[i],flag=1;
			}
			//	cout<<s[i]<<" "<<sum<<endl;
		}
		if(flag&&s[n-1]>s[n-2]) sum+=s[n-1];
		cout<<sum<<endl;
	}
}
