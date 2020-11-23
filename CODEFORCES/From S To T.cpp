#include<bits/stdc++.h>
using namespace std;
main(){
	int q;
	cin>>q;
	while(q--){
		string s,t,p;
		cin>>s>>t>>p;
		int fs[26]={},ft[26]={},fp[26]={};
		for(int i=0;i<s.length();i++) fs[s[i]-'a']++;
		for(int i=0;i<t.length();i++) ft[t[i]-'a']++;
		for(int i=0;i<p.length();i++) fp[p[i]-'a']++;
		int flag=0;
		for(int i=0;i<26;i++){
			if(fs[i]>ft[i]){
				flag=1;
				break;
			}
		}
		
		if(flag){
			cout<<"NO\n";
			continue;
		} 
		
		//check if s is a subsequence of t
		int lst_found=-1;
		for(int i=0;i<s.length();i++){
			int found=0;
			for(int j=lst_found+1;j<t.length();j++){
				if(s[i]==t[j]){
					lst_found=j;
					found=1;
					break;
				}
			}
			if(!found){
				flag=1;
				break;
			}
		}
		
		if(flag){
			cout<<"NO\n";
			continue;
		} 
		
		for(int i=0;i<26;i++){
			if(fs[i]+fp[i]<ft[i]){
				flag=1;
				break;
			}
		}
		
		if(flag){
			cout<<"NO\n";
			continue;
		} 	
		
		cout<<"YES\n";
	}
}
