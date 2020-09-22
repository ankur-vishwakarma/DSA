#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,t;
		cin>>a>>b;
		if(a==b){
			cout<<"0\n";
			continue;
		}
		if(a<b) t=a,a=b,b=t;
		ll n=0;
		ll sum=(b-a+(n*(n+1))/2)/2;
		ll parity=(b-a+(n*(n+1))/2)%2;
		while(sum<0||parity!=0){
			sum=(b-a+(n*(n+1))/2)/2;
			//cout<<sum<<" "<<n<<endl;
			parity=(b-a+(n*(n+1))/2)%2;
			n++;
		}
		cout<<n-1<<endl;
	}
}
