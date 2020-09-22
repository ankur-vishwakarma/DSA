
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	ll x,k,y;
	cin>>x>>k>>y;
	ll a[n+2],b[m+2];
	a[0]=0,b[0]=0,a[n+1]=0,b[m+1]=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	ll l=1;
	for(int i=1;i<=m;i++){
		while(l<=n&&a[l]!=b[i]) l++;
		if(l>n){
			cout<<"-1";
			return 0;
		}
		l++;
	}
	ll p=0,q=0;
	ll cost=0;
	for(int i=0;i<m+1;i++){
		for(int j=p;j<n+2;j++){
			if(a[j]==b[i]){
				p=j;
				break;
			}
		}
		for(int j=p+1;j<n+2;j++){
			if(a[j]==b[i+1]){
				q=j;
				break;
			}
		}
		//cout<<p<<" "<<q<<endl;
		ll range=q-p-1;
		if(range<k){
			ll maxinthm=INT_MIN;
			for(int j=p+1;j<q;j++) maxinthm=max(maxinthm,a[j]);
			if(maxinthm>a[p]&&maxinthm>a[q]){
				cout<<"-1";
				return 0;
			}
			cost+=(range*y);
		}
		else{
			if(k*y<x){
				ll maxinthm=INT_MIN;
				for(int j=p+1;j<q;j++) maxinthm=max(maxinthm,a[j]);
				if(maxinthm>a[p]&&maxinthm>a[q]){
					cost+=((range-k)*y);  //k ko leave krke M
					cost+=x;    //lst k ko F
				}
				else cost+=(range*y);  //M all
			}
			else if(x<k*y){
				//check evenly divible range by k
				if(range%k==0){
					cost+=((range/k)*x);
				}
				else{
					cost+=((range%k)*y);
					cost+=((range/k)*x);
				}
			}
		}
		p=q;
	}
	cout<<cost<<endl;
}
