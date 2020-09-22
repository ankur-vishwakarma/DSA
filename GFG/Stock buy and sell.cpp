#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int strt=0,i=1,profit=0;
		vector <pair<int,int> > v;
		while(i<n){
			//cout<<s[strt]<<" "<<s[i]<<endl;
			if(s[i]<s[strt]){
				strt=i;
				i++;
				continue;
			}
			while(s[i]>=s[i-1]&&i<n) i++;
			profit+=(s[i-1]-s[strt]),v.push_back({strt,i-1});
			strt=i,i++;
		}
		if(profit==0){
			cout<<"No Profit\n";
			continue;
		}
		for(int i=0;i<v.size();i++) cout<<"("<<v[i].first<<" "<<v[i].second<<") ";
		cout<<endl;
	}
}
