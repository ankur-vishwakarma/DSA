#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t,p=1;
	cin>>t;
	while(t--){
		//cout<<p<<endl;
		//p++;
		long long n,l,r;
		cin>>n>>l>>r;
		ll s[n];
		s[0]=(n-1)*2;
		for(ll i=1;i<n;i++) s[i]=s[i-1]-2;
		for(ll i=1;i<n;i++) s[i]=s[i-1]+s[i];
		for(ll i=n-1;i>=1;i--) s[i]=s[i-1];
		s[0]=0;
		//for(int i=0;i<n;i++) cout<<s[i]<<" ";
		ll flag=n-1,flage=n-1;
		for(ll i=0;i<n;i++) if(s[i]>=l) { flag=i; break; }
		for(ll i=flag;i<n;i++) if(s[i]>r) { flage=i; break; }
		//cout<<flag<<" "<<flage<<endl;
		vector<ll> v;
		for(ll i=flag;i<=flage+1;i++){
			for(ll j=i+1;j<=n;j++) v.push_back(i),v.push_back(j)/*,cout<<i<<" "<<j<<endl*/;
		}
		if(flage==n-1) v.push_back(1);
		ll strt=l-s[flag-1]-1,count=r-l+1;
		if(strt<1) strt=0;
		//cout<<strt<<" "<<count<<endl;
		for(ll i=strt;i<count+strt&&i<v.size();i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}
/*
3
2 1 3
3 3 6
4 3 6
*/
