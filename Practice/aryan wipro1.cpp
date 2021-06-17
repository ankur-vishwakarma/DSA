#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n,greater<int>());
	cout<<s[k-1];
}
