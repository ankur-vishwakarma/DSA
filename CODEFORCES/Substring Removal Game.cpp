#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<int> v;
		int n=s.length();
		for(int i=0;i<n;){
			int count=0;
			while(s[i]=='1'&&i<n) count++,i++;
			if(count!=0) v.push_back(count);
			else i++;
		}
		sort(v.begin(),v.end(),greater<int>());
		int ans=0;
		for(int i=0;i<v.size();i+=2) ans+=v[i];
		cout<<ans<<endl;
	}
}
