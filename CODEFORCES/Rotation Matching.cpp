#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],t[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++) cin>>t[i];
	int it=0;
	map <int,int> pos;
	for(int i=0;i<n;i++){
		pos[s[i]]=i;
	}
	map<int,int> f;
	for(int i=0;i<n;i++){
		f[t[i]]=pos[t[i]]-i;
		if(f[t[i]]<0) f[t[i]]+=n;
		//cout<<t[i]<<" "<<f[t[i]]<<endl;
	}
	pos.clear();
	for(auto itr=f.begin();itr!=f.end();itr++){
		pos[itr->second]++;
	}
	int ans=0;
	for(auto itr=pos.begin();itr!=pos.end();itr++){
		ans=max(ans,itr->second);
	}
	cout<<ans;
}
