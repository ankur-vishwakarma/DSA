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
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int cur=0,mx=0;
		for(int i=1;i<n-1;i++){
			if((s[i]>s[i-1]&&s[i]>s[i+1])||(s[i]<s[i-1]&&s[i]<s[i+1])){
				cur+=2;
				if(i-2>=0) if((s[i]>s[i-1]&&s[i]>s[i-2])||(s[i]<s[i-1]&&s[i]<s[i-2])) cur++;
				if(i+2<n)  if((s[i]>s[i+1]&&s[i]>s[i+2])||(s[i]<s[i+1]&&s[i]<s[i+2])) cur++;
			}
			mx=max(cur,mx);
			if(mx==4) break;
		}
		mx=max(mx,cur);
		int total=0;
		for(int i=1;i<n-1;i++) if((s[i-1]<s[i]&&s[i]>s[i+1])||(s[i-1]>s[i]&&s[i]<s[i+1])) total++;
		cout<<mx<<" "<<total<<" ";
		cout<<total-(mx-1)<<endl;
	}
}

/*

*/
