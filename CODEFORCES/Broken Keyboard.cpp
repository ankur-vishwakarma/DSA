#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		set <char> ans;
		//if(s.size()<2) ans.insert(s[0]);
		bool mp[27];
		for(int i=0;i<27;i++) mp[i]=false;
		for(int i=0;i<s.size();){
			//cout<<s[i]<<" "<<mp[s[i]-97]<<endl;
			if(s[i]!=s[i+1]&&!mp[s[i]-97]) ans.insert(s[i]),i++;
			else i+=2;
		}
		for(auto itr=ans.begin();itr!=ans.end();itr++) cout<<*itr;
		cout<<endl;
	}
}
