#include<bits/stdc++.h>
#define ll long long
using namespace std;
void build(int * s,int n,pair<ll,ll> * tree,int start,int end,int node){
    if(start==end){
        tree[node].first=s[start];
        tree[node].second=-1;
        return;
    }
    int mid=(start+end)/2;
    build(s,n,tree,start,mid,2*node+1);
    build(s,n,tree,mid+1,end,2*node+2);
    tree[node].first=max(tree[2*node+1].first,tree[2*node+2].first);
    if(tree[node].first!=tree[2*node+1].first) tree[node].second=max(tree[2*node+1].first,tree[2*node+2].second);
    else tree[node].second=max(tree[2*node+2].second,tree[2*node+2].first);
    return;
}
void update(pair<ll,ll> * tree,int start,int end,int node,int idx,int value){
    if(start==end){
    	//cout<<value<<" "<<node<<endl;
        tree[node].first=value;
        return;
    }
    int mid=(start+end)/2;
    if(idx<=mid) update(tree,start,mid,2*node+1,idx,value);
    else update(tree,mid+1,end,2*node+2,idx,value);
    tree[node].first=max(tree[2*node+1].first,tree[2*node+2].first);
    if(tree[node].first!=tree[2*node+1].first) tree[node].second=max(tree[2*node+1].first,tree[2*node+2].second);
    else tree[node].second=max(tree[2*node+2].second,tree[2*node+2].first);
    return;
}
pair<int,int> query(pair<ll,ll> * tree, int start,int end,int node,int l,int r){
	if(l>end||r<start) return {-1,-1};
	if(start>=l&&end<=r) return tree[node];
	int mid=(start+end)/2;
	pair<ll,ll> la=query(tree,start,mid,2*node+1,l,r);
	pair<ll,ll> lr=query(tree,mid+1,end,2*node+2,l,r);
	int lar=max(la.first,lr.first),rar;
	if(lar!=la.first) rar=max(la.first,lr.second);
    else rar=max(la.second,lr.first);
	return {lar,rar};
}
int main() {

	int n,q;
    cin>>n;
    int s[n];
    pair <ll,ll> tree[4*n];
    vector <pair<char,pair<ll,ll> > > v;
    for(int i=0;i<n;i++) cin>>s[i];
    cin>>q;
    for(int i=0;i<q;i++){
        char a; int b,c;
        cin>>a>>b>>c;
        v.push_back({a,{b,c}});
    }
    build(s,n,tree,0,n-1,0);
    //for(int i=0;i<4*n;i++) cout<<tree[i]<<" ";
    //cout<<endl;
    /*update(tree,0,n-1,0,2,10);
    for(int i=0;i<4*n;i++) cout<<tree[i]<<" ";
    cout<<query(tree,0,n-1,0,2,4);*/
    for(int i=0;i<q;i++){
    	if(v[i].first=='Q'){
    		pair<ll,ll> ans=query(tree,0,n-1,0,v[i].second.first-1,v[i].second.second-1);
    		cout<<ans.first+ans.second<<endl;
		}
    	else update(tree,0,n-1,0,v[i].second.first-1,v[i].second.second);
	}
}
