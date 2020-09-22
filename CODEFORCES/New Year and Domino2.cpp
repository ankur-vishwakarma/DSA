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
ll dph[501][501],dpv[501][501];
int a,b,c,d,h,w;
void filldp(){
	ll ans=0;
	//horizontal
	for(int i=0;i<h;i++){
		for(int j=1;j<w;j++){
			dph[i][j]=dph[i][j-1];
			if(s[i][j]=='.'&&s[i][j-1]=='.'){
				dph[i][j]++;
			}
			//cout<<dph[i][j]<<" ";
		}
		//cout<<endl;
	}
	//cout<<endl;
	//vertic
	for(int j=0;j<w;j++){
		for(int i=1;i<h;i++){
			dpv[i][j]=dpv[i-1][j];
			if(s[i][j]=='.'&&s[i-1][j]=='.'){
				dpv[i][j]++;
			}
		}
	}
	
	/*for(int i=0;i<h;i++){
		for(int j=0;j<w;j++) cout<<dpv[i][j]<<" ";
		cout<<endl;
	}*/
}
ll solve(){
	ll ansv=0,ansh=0;
	for(int i=a;i<=c;i++) ansh+=(dph[i][d]-dph[i][b]);
	for(int i=b;i<=d;i++) ansv+=(dpv[c][i]-dpv[a][i]);
	return ansv+ansh;
	/*//lst row
	for(int i=b;i<d;i++) if(s[c][i]=='.'&&s[c][i+1]=='.') ans++;
	for(int i=a;i<c;i++) if(s[i][d]=='.'&&s[i+1][d]=='.') ans++;
	return ans;*/
}
main(){
	FAST;
	cin>>h>>w;
	for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin>>s[i][j];
	filldp();
	ll q;
	cin>>q;
	while(q--){
		cin>>a>>b>>c>>d;
		a--,b--,c--,d--;
		cout<<solve()<<endl;
	}
}
