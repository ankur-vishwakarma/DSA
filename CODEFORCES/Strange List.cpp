#include<bits/stdc++.h>
#define ll long long
using namespace std;
int flag;
ll rec(ll s,ll x,int count){
	//cout<<s<<" "<<count<<endl;
	if(s%x==0) return count*s+rec(s/x,x,count*x);
	else if(s!=1&&x!=1) flag=1;
	return count*s;
}
main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll s[n];
		
		flag=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(s[i]%x!=0) flag=1;
		}
		ll ans=0,i;
		for(i=0;i<n;i++){
			//cout<<i<<" "<<ans<<endl;
			if(s[i]%x!=0) break;
			if(flag){
				ans+=(s[i]+s[i]/x*x);
				continue;
			}
			
			ans+=rec(s[i],x,1);
			
		}
		//cout<<i<<endl;
		while(i<n) ans+=s[i],i++;
		cout<<ans<<endl;
	}
}	
