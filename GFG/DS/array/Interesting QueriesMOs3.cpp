#include<bits/stdc++.h>
using namespace std;
int blk;
bool compare(const pair<int,pair<int,int> > & a,const pair<int,pair<int,int> > & b){
	if(a.first/blk==b.first/blk) return a.second.first<=b.second.first;
	return a.first/blk<=b.first/blk;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,k;
		cin>>n>>q>>k;
		blk=sqrt(n);
		int s[n],a,b;
		vector <pair<int,pair<int,int> > > v;
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<q;i++) cin>>a>>b,v.push_back({a,{b,i}});
		//sort queries
		sort(v.begin(),v.end(),compare);
		//for(int i=0;i<q;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
		unordered_map <int,int> mp;
		int pl=v[0].first-1,pr=v[0].second.first-1,count=0;
		for(int i=pl;i<=pr;i++){
			mp[s[i]]++;
			if(mp[s[i]]==k) count++;
		}
		int ans[q];
		ans[v[0].second.second]=count;
		//cout<<ans[v[0].second.second]<<endl;
		/*for(auto itr: mp){
				//cout<<itr.first<<" "<<itr.second<<endl;
				if(itr.second>=k) count++;
			}*/
		//cout<<count<<" ";
		for(int i=1;i<q;i++){
			while(v[i].first-1<pl){
				pl--;
				mp[s[pl]]++;
				if(mp[s[pl]]==k) count++;
			}
			while(v[i].first-1>pl){
				//cout<<s[pl]<<" "<<mp[s[pl]]<<endl;
				mp[s[pl]]--;
				if(mp[s[pl]]==k-1) count--;
				pl++;
			}
			//cout<<pl<<" "<<count<<"pl\n";
			while(v[i].second.first-1<pr){
				mp[s[pr]]--;
				if(mp[s[pr]]==k-1) count--;
				pr--;
			}
			while(v[i].second.first-1>pr){
				pr++;
				mp[s[pr]]++;
				if(mp[s[pr]]==k) count++;
			}
			//cout<<pr<<"pr\n";
			//lets iterate map n count >k's
			/*count=0;  //cnt iterate tle
			for(auto itr: mp){
				//cout<<itr.first<<" "<<itr.second<<endl;
				if(itr.second>=k) count++;
			}*/
			//cout<<count<<" ";
			ans[v[i].second.second]=count;
		}
		for(int i=0;i<q;i++) cout<<ans[i]<<" ";
		cout<<"\n";
	}
}
