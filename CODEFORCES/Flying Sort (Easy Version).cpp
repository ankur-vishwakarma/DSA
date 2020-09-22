#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n],t[n];
		for(int i=0;i<n;i++) cin>>s[i],t[i]=s[i];
		sort(t,t+n);
		int strt=s[0],j=0;
		long long ops=0;
		while(t[j]<strt&&j<n) ops++,j++;
		for(int i=n-1;i>=0;i++) if(s[i]>strt){ j=i; break; }
		int end=s[j];
		j=n-1;
		while(t[j]>end&&j>=0) ops++,j--;
		cout<<ops<<endl;
	}
}
