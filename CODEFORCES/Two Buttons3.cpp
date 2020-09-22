#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	if(m<n){
		cout<<n-m<<endl;
	}
	else{
		long long f=INT_MAX;
		for(long long i=n;i>=1;i--){
			long long ans=n-i,j=i; 
			while(j<m) j*=2,ans++;
			if(j>m) ans+=(j-m);
			//cout<<i<<" "<<ans<<endl;
			f=min(f,ans);
		}
		cout<<f<<endl;
	}
	
}
