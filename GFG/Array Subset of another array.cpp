#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int s[n],t[m];
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<m;i++) cin>>t[i];
		sort(s,s+n);
		int flag=0;
		for(int i=0;i<m;i++){
			if(!binary_search(s,s+n,t[i])){
				cout<<"No\n";
				flag=1;
				break;
			}
		}
		if(flag!=1) cout<<"Yes\n";
	}
}
