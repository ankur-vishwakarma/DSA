#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n],flag=0;
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
		for(int i=0;i<n-2;i++){
			if(s[i+1]-s[i]!=1){
				cout<<"No\n";
				flag=1;
				break;
			}
		}
		if(flag!=1) cout<<"Yes\n";
	}
}
