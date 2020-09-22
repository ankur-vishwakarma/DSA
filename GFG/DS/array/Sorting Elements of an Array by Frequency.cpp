#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> & a,pair<int,int> & b){
	if(a.first==b.first) return a.second<b.second;
	return a.first>b.first;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		unordered_map<int,int> m;
		for(int i=0;i<n;i++) cin>>a,m[a]++;
		vector<pair<int,int> > v;
		for(auto itr: m){
			//cout<<itr.second<<" "<<itr.first<<endl;
			v.push_back({itr.second,itr.first});
		}
		sort(v.begin(),v.end(),comp);
		for(int i=0;i<v.size();i++) while(v[i].first--) cout<<v[i].second<<" ";
		cout<<endl;
	}
}
