#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll r=-1000000000000,l=1000000000000;
		char a;
		ll b;
		while(n--){
			cin>>a>>b;
			if(a=='L'&&b<l) l=b;
			else if(a=='R'&&b>r) r=b;
		}
		///cout<<l<<" "<<r;
		if(l-r-1<=0) cout<<"-1\n";
		else cout<<l-r-1<<endl;
	}
}
