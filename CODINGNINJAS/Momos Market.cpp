#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) cin>>a,v.push_back(a);
	int q;
	cin>>q;
	int t[q];
	for(int i=0;i<q;i++) cin>>t[i];
	//sort(v.begin(),v.end());
	for(int i=1;i<v.size();i++){
		v[i]=v[i]+v[i-1];
	}
	for(int i=0;i<q;i++){
		int ind=lower_bound(v.begin(),v.end(),t[i])-v.begin();
		//cout<<v[ind]<<endl;
		if(v[ind]==t[i]) cout<<ind+1<<" "<<"0\n";
		else cout<<ind<<" "<<t[i]-v[ind-1]<<endl;
	}
}
