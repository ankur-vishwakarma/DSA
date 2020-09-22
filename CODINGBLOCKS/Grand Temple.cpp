#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],t[n];
	for(int i=0;i<n;i++) cin>>s[i]>>t[i];
	sort(s,s+n); sort(t,t+n);
	int xd=INT_MIN,yd=INT_MIN;
	for(int i=1;i<n;i++){
		if(s[i]-s[i-1]>xd) xd=s[i]-s[i-1];
		if(t[i]-t[i-1]>yd) yd=t[i]-t[i-1];
	}
	cout<<(xd-1)*(yd-1);
}
