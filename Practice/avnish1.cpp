#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(int N,vector<ll> Array_elements){
	vector<ll> ans;
	int nn=N;
	while(nn--){
		ll a,b,cur=0;
		for(int i=0;i<2*N;i++){
			if(Array_elements[i]==-1) continue;
			for(int j=i+1;j<2*N;j++){
				if(Array_elements[j]==-1) continue;
				int g=__gcd(Array_elements[i],Array_elements[j]);
				if(g>cur) cur=g,a=i,b=j;
			}
		}
		ans.push_back(cur),Array_elements[a]=-1,Array_elements[b]=-1;
	}
	
	sort(ans.begin(),ans.end());
	ll f=0;
	for(int i=0;i<N;i++) f+=((i+1)*ans[i]);
	return f;
}
main(){
	int n,k;
	cin>>n;
	vector<ll> s(2*n);
	for(int i=0;i<2*n;i++) cin>>s[i];
	
	cout<<solve(n,s)<<endl;
}
