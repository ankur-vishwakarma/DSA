#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool comp(pair<ll,int> &a,pair<ll,int> &b){
	if(a.first>b.first) return true;
	if(a.first==b.first&&a.second<b.second) return true;
	return false;
}

main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		pair<ll,int> s[n];  //need,index
		ll t[m];
		for(int i=0;i<n;i++){
			cin>>s[i].first,s[i].second=i;
			s[i].first--;
		}
		for(int i=0;i<m;i++) cin>>t[i];
		sort(s,s+n,comp);
		//for(int i=0;i<n;i++) cout<<s[i].first<<" "<<s[i].second<<endl;
		ll given=0,total=0;
		for(int i=0;i<n;i++){
			ll i_need=t[s[i].first];
			if(given<m&&given<=s[i].second&&t[given]<i_need) total+=t[given],given++;
			else total+=i_need;
			//cout<<total<<" "<<given<<endl;
		}
		cout<<total<<endl;
	}
}	
