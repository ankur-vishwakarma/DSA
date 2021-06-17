/*
Given n non-negative integers representing an elevation map where the width of each bar is 1,
 compute how much water it is able to trap after raining.
     8
 8   8
 8 8 8
 88888
*/
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		long long f[n],b[n];
		f[0]=s[0];  b[n-1]=s[n-1];
		for(int i=1;i<n;i++) f[i]=max(s[i],f[i-1]);
		for(int i=n-2;i>=0;i--) b[i]=max(s[i],b[i+1]);
		long long ans=0;
		for(int i=1;i<n-1;i++){
		//	cout<<f[i]<<" "<<b[i]<<endl;
			long long w=(min(f[i],b[i])-s[i]);
			if(w>0) ans+=w;
		}
		cout<<ans<<endl;
	}
}
