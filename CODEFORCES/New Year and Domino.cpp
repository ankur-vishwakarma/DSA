#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;


char s[500][502];
int a,b,c,d;

ll solve(){
	ll ans=0;
	for(int i=a;i<c;i++){
		for(int j=b;j<d;j++){
			if(s[i][j]=='.'){
				if(s[i][j+1]=='.') ans++;
				if(s[i+1][j]=='.') ans++;
			}
		}
	}
	//lst row
	for(int i=b;i<d;i++) if(s[c][i]=='.'&&s[c][i+1]=='.') ans++;
	for(int i=a;i<c;i++) if(s[i][d]=='.'&&s[i+1][d]=='.') ans++;
	return ans;
}
main(){
	FAST;
	ll h,w;
	cin>>h>>w;
	for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin>>s[i][j];
	ll q;
	cin>>q;
	while(q--){
		cin>>a>>b>>c>>d;
		a--,b--,c--,d--;
		cout<<solve()<<endl;
	}
}
