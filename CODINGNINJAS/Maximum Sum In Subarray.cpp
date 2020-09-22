#include<bits/stdc++.h>
#define ll long long
using namespace std;
void buildST(int * s,int n,ll ** tree,int strt,int end,int node){
	if(strt==end){
		tree[node][1]=0;
		tree[node][0]=s[strt];
		tree[node][1]=0;
		return;
	}
	int mid=(strt+end)/2;
	buildST(s,n,tree,strt,mid,2*node+1);
	buildST(s,n,tree,mid+1,end,2*node+2);
	ll ind_max=max(tree[2*node+1][0],tree[2*node+2][0]);
	//sum=child1.data+child1.right+child2.left+child2.data
	ll sum=tree[2*node+1][0]+tree[2*node+1][2]+tree[2*node+2][1]+tree[2*node+2][0];
	tree[node][0]=max(sum,ind_max);
	if(tree[node][0]!=ind_max){
		tree[node][1]=tree[2*node+1][1];
		tree[node][2]=tree[2*node+2][2];
	}else{
		if(ind_max==tree[2*node+1][0]){
			tree[node][1]=tree[2*node+1][1];
			if(tree[2*node+2][0]<0) tree[node][2]=tree[2*node+2][0];
			else tree[node][2]=0;
		}
		else{
			if(tree[2*node+1][0]<0) tree[node][1]=tree[2*node+1][0];
			else tree[node][1]=0;
			tree[node][2]=tree[2*node+2][2];
		}
	}
	//cout<<tree[node][0]<<" "<<tree[node][1]<<" "<<tree[node][2]<<" "<<strt<<" "<<end<<endl;
	return;
}
pair<ll,pair<ll,ll> > query(ll ** tree,int strt,int end,int l,int r,int node){
	if(l>end||r<strt) return {0,{0,0}};
	if(l<=strt&&r>=end) return {tree[node][0],{tree[node][1],tree[node][2]}};
	int mid=(strt+end)/2;
	pair<ll,pair<ll,ll> > lt=query(tree,strt,mid,l,r,2*node+1);
	pair<ll,pair<ll,ll> > rt=query(tree,mid+1,end,l,r,2*node+2);
	
	ll ind_max=max(lt.first,rt.first);
	//sum=child1.data+child1.right+child2.left+child2.data
	ll sum=lt.first+lt.second.second+rt.second.first+rt.first;
	ll ans=max(sum,ind_max),lans=0,rans=0;
	if(ans!=ind_max){
		lans=lt.second.first;
		rans=rt.second.second;
	}else{
		if(ind_max==lt.first){
			lans=lt.second.first;
			if(rt.first<0) rans=rt.first;
			else rans=0;
		}
		else{
			if(lt.first<0) lans=lt.first;
			else lans=0;
			rans=rt.second.second;
		}
	}
	return {ans,{lans,rans}};
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int m;
	cin>>m;
	int t[m][2];
	for(int i=0;i<m;i++) cin>>t[i][0]>>t[i][1],t[i][0]--,t[i][1]--;
	ll ** tree=new ll * [4*n];
    for(int i = 0; i <4*n; i++) tree[i] = new ll[3];
	buildST(s,n,tree,0,n-1,0);
	//for(int i=0;i<4*n;i++) cout<<tree[i][0]<<" ";
	for(int i=0;i<m;i++){
		pair<ll,pair<ll,ll> > ans=query(tree,0,n-1,t[i][0],t[i][1],0);
		cout<<ans.first<<endl;
	}
}
