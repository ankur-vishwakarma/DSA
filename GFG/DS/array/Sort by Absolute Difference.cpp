#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> & a,pair<int,int> & b){
	cout<<a.first<<" "<<b.first<<endl;
	if(a.first==b.first) return false;
	return a.first<b.first;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,a;
		cin>>n>>k;
		vector<pair<int,int> > v;
		for(int i=0;i<n;i++) cin>>a, v.push_back({abs(a-k),a});
		sort(v.begin(),v.end(),comp);
		for(int i=0;i<n;i++) cout<<v[i].second<<" ";
		cout<<endl;
	}
}

