#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string p,h;
		cin>>p>>h;
		map<char,int> pw;
		for(int i=0;i<p.size();i++) pw[p[i]]++;
		map<char,int> check;
		for(int i=0;i<h.size();i++){
			if(!pw[h[i]]){
				for(auto itr=pw.begin();itr!=pw.end();itr++){
					if(check[itr->first]!=itr->second){
						check.clear();
						break;
					}
				}
				continue;
			}
			check[h[i]]++;
			cout<<check[h[i]]<<" "<<h[i]<<endl;
			if(check[h[i]]>pw[h[i]]) check.clear();
			//cout<<check[h[i]]<<"e "<<h[i]<<endl;
		}
		int flag=0;
		for(auto itr=pw.begin();itr!=pw.end();itr++){
			cout<<pw[itr->first]<<" "<<itr->second<<endl;
			if(check[itr->first]!=itr->second){
				cout<<"NO\n";
				flag=1;
				break;
			}
		}
		if(!flag) cout<<"YES\n";
	}
}
