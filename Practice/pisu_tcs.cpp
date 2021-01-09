#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	map<int,bool> mp;
	for(int i=0;i<s.length();i++){
		int k=s[i]-'0';
		if(k>=1&&k<=9) mp[k]=true;
	}
	int flag=0;
	for(int i=1;i<=9;i++){
		if(!mp[i]){
			flag=1;
			break;
		}
	}
	if(!flag)  cout<<"Yes";
	else cout<<"No";
}
