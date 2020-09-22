#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	while(n--){
		long long c,s;
		cin>>c>>s;
		if(c>=s){
			cout<<s<<endl;
		}
		else{
			long long extra=0,equal=0,ans=0;
			equal=s/c;
			extra=s%c;
			ans+=(extra*pow(equal+1,2));
			ans+=((c-extra)*pow(equal,2));
			cout<<ans<<endl;
		}
	}
}
