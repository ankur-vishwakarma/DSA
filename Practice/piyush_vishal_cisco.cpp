#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n;
	vector<int> v;
	k=abs(n);
	while(k){
		v.push_back(k%10);
		k/=10;
	}
	if(n<0){
		//make largest
		sort(v.begin(),v.end(),greater<int>());
		cout<<"-";
		for(int i=0;i<v.size();i++) cout<<v[i];
	}else{
		sort(v.begin(),v.end());
		//handle 0
		int i=0,z=0;
		while(v[i]==0) i++,z++;
	    cout<<v[i]; i++;
	    while(z--) cout<<0;
	    while(i<v.size()) cout<<v[i],i++;
	}
}
