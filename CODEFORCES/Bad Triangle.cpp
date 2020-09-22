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
		int flag=0;
		for(int i=0;i<n-2;i++){
			if(s[n-1]>=s[i]+s[i+1]){
				flag=1;
				cout<<i+1<<" "<<i+2<<" "<<n<<endl;
				break;
			}
		}
		if(flag!=1) cout<<"-1\n";
	}
}
