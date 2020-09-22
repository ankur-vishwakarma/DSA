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
	int n;
	cin>>n;
	int s[n][2];
	unordered_map<int,vector<int> > to,fro;
	map<int,int> frq;
	for(int i=0;i<n;i++){
		cin>>s[i][0]>>s[i][1];
		frq[s[i][0]]++,frq[s[i][1]]++;
		to[s[i][0]].push_back(s[i][1]),to[s[i][1]].push_back(s[i][0]);
	}
	int strt=-1;
	for(auto i=frq.begin();i!=frq.end();i++){
		if(i->second==1){
			strt=i->first;
			break;
		}
	}
	//cout<<strt<<endl;
	unordered_map<int,int> vistd;
	cout<<strt<<" ";
	vistd[strt]=1;
	for(int i=1;i<=n;i++){
		//cout<<to[strt][0]<<" ";
		if(to[strt][0]&&!vistd[to[strt][0]]) cout<<to[strt][0]<<" ",strt=to[strt][0],vistd[strt]=1;
		else if(to[strt][1]&&!vistd[to[strt][1]]) cout<<to[strt][1]<<" ",strt=to[strt][1], vistd[strt]=1;
		else cout<<to[strt][0]<<" ",strt=to[strt][0],vistd[strt]=1;
	}
	
}
