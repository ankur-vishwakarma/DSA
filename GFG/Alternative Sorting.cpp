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
		int flag=1,b=0,e=n-1;
		for(int i=0;i<n;i++){
			if(flag) cout<<s[e]<<" ",flag=0,e--;
			else cout<<s[b]<<" ",flag=1,b++;
		}
		cout<<"\n";
	}
}
