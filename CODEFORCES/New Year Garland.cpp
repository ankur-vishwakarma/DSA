#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long s[3];
		for(int i=0;i<3;i++) cin>>s[i];
		sort(s,s+3);
		if(s[2]-1>s[1]+s[0]) cout<<"No\n";
		else cout<<"Yes\n";
	}
}
