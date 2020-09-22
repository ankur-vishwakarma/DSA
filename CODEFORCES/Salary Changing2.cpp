#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool comp(pair<ll,ll> a,pair<ll,ll> b){
	if(a.second==b.second) return a.first<b.first;
	return a.second<b.second;
}
int check(ll mid,pair<ll,ll> * r,ll k,int n){
	int smallcnt=0,bigcnt=0;
	pair<ll,ll> *final=new pair<ll,ll>[n];
	int j=0;
	for(int i=0;i<n;i++){
		if(r[i].second<mid){
			smallcnt++;
			k=k-(r[i].first);
		}
		else if(r[i].first>mid){
			bigcnt++;
			k=k-(r[i].first);
		}
		else{
			final[j].first=r[i].first;
			final[j].second=r[i].second;
			j++;
		}
		//cout<<bigcnt<<"b scnt"<<smallcnt<<" kbefore"<<k<<"\n";
	}
	//for(int i=0;i<j;i++) cout<<final[i].first<<endl;
	if(bigcnt>n/2) return -1;
	else if(smallcnt>n/2) return 1;
	else{
		sort(final,final+j);
		int i=0;
		while(smallcnt<n/2&&i<j) smallcnt++,k-=final[i].first,i++;
		k-=(mid*(n/2-bigcnt));
		if(k>=0) return 0;
		else return 1;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		ll n,s;
		cin>>n>>s;
		pair<ll,ll> * r=new pair<ll,ll>[n];
		for(int i=0;i<n;i++) cin>>r[i].first>>r[i].second;
		if(n==1){
			cout<<min(r[0].second,s)<<endl;
			continue;
		}
		//sort(r,r+n);
		//for(int i=0;i<n;i++) cout<<r[i].first<<" "<<r[i].second<<endl;
		ll strt=1,end=s,final=1;
		while(strt<=end){
			ll mid=(strt+end)/2;
			int ans=check(mid,r,s-mid,n);
			if(ans==-1) strt=mid+1;
			else if(ans==0) final=mid,strt=mid+1;
			else end=mid-1;
		}
		cout<<final<<endl;
	}
}
/*
7 437

27 43

94 99

100 100

60 67

37 98

39 58

80 100

*/
