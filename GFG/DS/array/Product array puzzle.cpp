#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n],p[n],a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		p[0]=a[0],s[n-1]=a[n-1];
		for(int i=1;i<n;i++) p[i]=p[i-1]*a[i],s[n-i-1]=s[n-i]*a[n-i-1];
		//for(int i=0;i<n;i++) cout<<s[i]<<" ";
		for(int i=0;i<n;i++){
			int pre=1;
			if(i-1>=0) pre=p[i-1];
			int suf=1;
			if(i+1<n) suf=s[i+1];
			cout<<pre*suf<<" ";
		}
		cout<<"\n";
	}
}
