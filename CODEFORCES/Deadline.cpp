#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		if(d<=n){
			cout<<"YES\n";
			continue;
		}
		int x=n/2;
		int q=d/(x+1);
		if(d%(x+1)!=0) q++;
		if(x+q<=n){
			cout<<"YES\n";
			continue;
		}
		if(n%2!=0){
			x++;
			q=d/(x+1);
		    if(d%(x+1)!=0) q++;
			if(x+q<=n){
			    cout<<"YES\n";
			    continue;
		    }
		}
		cout<<"NO\n";
	}
}
