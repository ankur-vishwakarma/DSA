#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
		int flag=0;
		for(int i=0;i<n-1;i++){
			if(s[i+1]-s[i]>1){
				flag=1;
				break;
			}
		}
		if(flag) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
