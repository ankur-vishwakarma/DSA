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
		int n;
		cin>>n;
		if(n==1) cout<<9;
		else if(n==2) cout<<98;
		else{
			cout<<989;
			n-=3;
			while(n>=10){
				for(int i=0;i<=9;i++) cout<<i;
				n-=10;
			}
			for(int i=0;i<n;i++) cout<<i;
		}
		cout<<endl;
	}
}
