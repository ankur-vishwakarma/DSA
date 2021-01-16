#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll s[n],t[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
			t[i]=s[i];
		}
		ll div[n]={};
		for(int i=0;i<n;i++){
			while(s[i]%x==0) div[i]++,s[i]/=x;
			div[i]++;
		}
		ll ans=0,count=INT_MAX,pos=-1;
		for(int i=0;i<n;i++){
			if(div[i]<count){
				count=div[i];
				pos=i;
			}
		}
		for(int i=0;i<n;i++){
			ans+=(count*t[i]);
		}
		for(int i=0;i<pos;i++) ans+=t[i];
		cout<<ans<<endl;
	}
}	
