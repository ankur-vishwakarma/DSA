#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int s[n],t[m];
		map<int,int> mp;
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<m;i++){
			cin>>t[i];
			mp[t[i]]=1;
		}
		int f=0;
		for(int i=0;i<n;i++){
			if(mp[s[i]]){
				cout<<"YES\n1 "<<s[i]<<endl;
				f=1;
				break;
			}
		}
		if(!f) cout<<"NO\n";
	}
}
