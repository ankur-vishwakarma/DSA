#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<char> v;
		v.push_back(s[0]);
		for(int i=1;i<s.size();i+=2) v.push_back(s[i]);
		for(int i=0;i<v.size();i++) cout<<v[i];
		cout<<endl;
	}
}
