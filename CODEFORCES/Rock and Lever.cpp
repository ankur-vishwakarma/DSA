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

class trie{
	trie *left,*right;
};
//void insert(trie)

main(){
	FAST;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int leftone=-1;
		ll count=0;
		int ons[64]={},zrs[64]={};
		for(int i=0;i<n;i++){
			//cout<<s[i]<<endl;
			for(int j=63;j>=0;j--){
				int a=(s[i]>>j)&1;
				//cout<<a<<" "<<j<<endl;
				if(a){
					if(ons[j]){
						count+=ons[j];
					}
					ons[j]++;
					break;
				}else{
					zrs[j]++;
				}
			}
		}
		cout<<count<<endl;
	}
}
