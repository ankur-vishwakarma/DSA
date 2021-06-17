#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	int f[26]={};
	for(int i=0;i<s.length();i++) f[s[i]-'a']++;
	int ans=0;
	for(int i=0;i<26;i++) if(f[i]==1) ans++;
	cout<<ans<<endl;
}
