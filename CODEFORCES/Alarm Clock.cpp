#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b>=a){
			cout<<b<<endl;
			continue;
		}
		if(c-d<=0){
			cout<<"-1\n";
			continue;
		}
		ll one_c_rst=c-d;
		ll n=(a-b)/one_c_rst;
		if((a-b)%one_c_rst!=0) n++; //one more cycle
		long long rest=b+n*c;
		cout<<rest<<endl;
	}
}
