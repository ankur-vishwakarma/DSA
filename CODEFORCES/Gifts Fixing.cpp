#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s[n],t[n],ms=INT_MAX,mt=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(s[i]<ms) ms=s[i];
		}
		for(int i=0;i<n;i++){
			cin>>t[i];
			if(t[i]<mt) mt=t[i];
		}
		long long moves=0;
		for(int i=0;i<n;i++){
			long long d1=s[i]-ms,d2=t[i]-mt,dif=min(d1,d2);
			moves+=(dif);
			s[i]-=dif,t[i]-=dif;
			if(s[i]==ms) moves+=(t[i]-mt);
			if(t[i]==mt) moves+=(s[i]-ms);
		}
		cout<<moves<<endl;
	}
}
