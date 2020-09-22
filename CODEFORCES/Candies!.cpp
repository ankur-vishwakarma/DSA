#include<bits/stdc++.h>
using namespace std;
pair<int,int> build(pair<int,int> *t,int *s,int strt,int end,int node){
	if(strt==end){
		t[node].first=0;
		t[node].second=s[strt];
		return {0,s[strt]};
	}
	int mid=(strt+end)/2;
	if((strt+end)%2!=0) mid++;
	pair<int,int> left=build(t,s,strt,mid,2*node);
	pair<int,int> right=build(t,s,mid+1,end,2*node+1);
	int val=left.first+right.first;
	int sum=left.second+right.second;
	if(sum>=10) val++;
	t[node].first=val,t[node].second=sum%10;
	return {val,sum%10};
}
int query(pair<int,int> *t,int strt,int end,int l,int r,int node){
	//cout<<strt<<" "<<end<<" "<<node<<endl;
	if(r<strt||l>end) return 0;
	else if(strt>=l&&end<=r) return t[node].first;
	int mid=(strt+end)/2;
	int left=query(t,strt,mid,l,r,2*node);
	int right=query(t,mid+1,end,l,r,2*node+1);
	//cout<<node<<" "<<left<<"ll "<<right<<endl;
	return left + right;
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	pair<int,int> seg1[4*n],seg2[4*n];
	build(seg1,s,0,n-1,1);
	if(n>1) build(seg2,s+1,0,n-1,1);
	for(int i=1;i<4*n;i++){
		 cout<<i<<" "<<seg1[i].first<<" "<<seg1[i].second<<endl;
	}
	cout<<endl;
	for(int i=0;i<4*n;i++){
		 cout<<seg2[i].first<<" "<<seg2[i].second<<endl;
	}
	
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		if(l%2==0){ //call on seg2 which strts from even index
			cout<<query(seg2,1,n-1,l-1,r-1,1)<<endl;
		}
		else{
			cout<<query(seg1,1,n,l,r,1)<<endl;
		}
	}
}
