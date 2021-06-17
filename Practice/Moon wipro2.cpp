#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	for(int i=0;i<n/2;i++) cout<<s[n-1-i]<<" "<<s[i]<<endl;
	if(n%2!=0) cout<<s[n/2]<<" "<<0<<endl;
}
