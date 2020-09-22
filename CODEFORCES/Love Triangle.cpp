#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n+1];
	for(int i=1;i<=n;i++) cin>>s[i];
	for(int i=1;i<=n;i++){
		int ilove=s[i];
		int heloves=s[ilove];
		if(s[heloves]==i){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO\n";
}
