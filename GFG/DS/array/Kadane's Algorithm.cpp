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
		int cs=0,ms=INT_MIN,i=0;
		while(i<n){
			cs+=s[i];
			ms=max(ms,cs);
			if(cs<0) cs=0;
			i++;
		}
		cout<<ms<<"\n";
	}
}
